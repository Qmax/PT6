#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent,Qt::FramelessWindowHint),
  ui(new Ui::MainWindow)
{
    m_nX.resize(1000);    m_nY.resize(1000);
    m_nX1.resize(1000);    m_nY1.resize(1000);
    m_nX2.resize(1000);    m_nY2.resize(1000);
    m_nX3.resize(1000);    m_nY3.resize(1000);
    m_nX4.resize(1000);    m_nY4.resize(1000);
    m_nX5.resize(1000);    m_nY5.resize(1000);
    m_nX6.resize(1000);    m_nY6.resize(1000);
    graphSelect=0;

  srand(QDateTime::currentDateTime().toTime_t());
  ui->setupUi(this);
  
  QPalette palette;
  QLinearGradient gradient(ui->frame_2->rect().topLeft(),ui->frame_2->rect().bottomLeft());
  gradient.setColorAt(0,	QColor(255,255,255));
  gradient.setColorAt(1,	QColor(218,219,255));
  palette.setBrush(QPalette::Background, QBrush(gradient));

  ui->customPlot->setBackground(QBrush(gradient));
  ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectAxes |
                                  QCP::iSelectLegend | QCP::iSelectPlottables | QCP::iMultiSelect | QCP::iSelectItems | QCP::iSelectOther);
  ui->customPlot->xAxis->setRange(-1, 1000);
  ui->customPlot->yAxis->setRange(-20, 20);
  ui->customPlot->axisRect()->setupFullAxesBox();
  
//  ui->customPlot->plotLayout()->insertRow(0);
//  ui->customPlot->plotLayout()->addElement(0, 0, new QCPPlotTitle(ui->customPlot, "ARBITARY WAVEFORM GENERATOR"));
  
  ui->customPlot->xAxis->setLabel("x Axis");
  ui->customPlot->yAxis->setLabel("y Axis");
  ui->customPlot->legend->setVisible(true);
  QFont legendFont = font();
  legendFont.setPointSize(10);
  ui->customPlot->legend->setFont(legendFont);
  ui->customPlot->legend->setSelectedFont(legendFont);
  ui->customPlot->legend->setSelectableParts(QCPLegend::spItems); // legend box shall not be selectable, only legend items

  
  // connect slot that ties some axis selections together (especially opposite axes):
  connect(ui->customPlot, SIGNAL(selectionChangedByUser()), this, SLOT(selectionChanged()));
  // connect slots that takes care that when an axis is selected, only that direction can be dragged and zoomed:
  connect(ui->customPlot, SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mousePress()));
  connect(ui->customPlot, SIGNAL(mouseWheel(QWheelEvent*)), this, SLOT(mouseWheel()));
  
  // make bottom and left axes transfer their ranges to top and right axes:
  connect(ui->customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->customPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui->customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->customPlot->yAxis2, SLOT(setRange(QCPRange)));
  
  // connect some interaction slots:
  connect(ui->customPlot, SIGNAL(titleDoubleClick(QMouseEvent*,QCPPlotTitle*)), this, SLOT(titleDoubleClick(QMouseEvent*,QCPPlotTitle*)));
  connect(ui->customPlot, SIGNAL(axisDoubleClick(QCPAxis*,QCPAxis::SelectablePart,QMouseEvent*)), this, SLOT(axisLabelDoubleClick(QCPAxis*,QCPAxis::SelectablePart)));
  connect(ui->customPlot, SIGNAL(legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*,QMouseEvent*)), this, SLOT(legendDoubleClick(QCPLegend*,QCPAbstractLegendItem*)));
  
  // connect slot that shows a message in the status bar when a graph is clicked:
  connect(ui->customPlot, SIGNAL(plottableClick(QCPAbstractPlottable*,QMouseEvent*)), this, SLOT(graphClicked(QCPAbstractPlottable*)));
  
  // setup policy and connect slot for context menu popup:
  ui->customPlot->setContextMenuPolicy(Qt::CustomContextMenu);
  connect(ui->customPlot, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(contextMenuRequest(QPoint)));

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`
  setGeometry(0,33,800,567);
  ui->butZoomIn->setVisible(false);
  ui->butZoomOut->setVisible(false);

  label[0]=new QmaxLabel(0,this);
  label[0]->setGeometry(ui->label_Amplitude->geometry());
  label[0]->setText(ui->label_Amplitude->text());

  label[1]=new QmaxLabel(1,this);
  label[1]->setGeometry(ui->label_Amplitude->geometry());

  label[2]=new QmaxLabel(2,this);
  label[2]->setGeometry(ui->label_Amplitude->geometry());

  label[3]=new QmaxLabel(3,this);
  label[3]->setGeometry(ui->label_Amplitude->geometry());

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::titleDoubleClick(QMouseEvent* event, QCPPlotTitle* title)
{
  Q_UNUSED(event)
  // Set the plot title by double clicking on it
  bool ok;
  QString newTitle = QInputDialog::getText(this, "QCustomPlot example", "New plot title:", QLineEdit::Normal, title->text(), &ok);
  if (ok)
  {
    title->setText(newTitle);
    ui->customPlot->replot();
  }
}

void MainWindow::axisLabelDoubleClick(QCPAxis *axis, QCPAxis::SelectablePart part)
{
  // Set an axis label by double clicking on it
  if (part == QCPAxis::spAxisLabel) // only react when the actual axis label is clicked, not tick label or axis backbone
  {
    bool ok;
    QString newLabel = QInputDialog::getText(this, "QCustomPlot example", "New axis label:", QLineEdit::Normal, axis->label(), &ok);
    if (ok)
    {
      axis->setLabel(newLabel);
      ui->customPlot->replot();
    }
  }
}

void MainWindow::legendDoubleClick(QCPLegend *legend, QCPAbstractLegendItem *item)
{
  // Rename a graph by double clicking on its legend item
  Q_UNUSED(legend)
  if (item) // only react if item was clicked (user could have clicked on border padding of legend where there is no item, then item is 0)
  {
    QCPPlottableLegendItem *plItem = qobject_cast<QCPPlottableLegendItem*>(item);
    bool ok;
    QString newName = QInputDialog::getText(this, "QCustomPlot example", "New graph name:", QLineEdit::Normal, plItem->plottable()->name(), &ok);
    if (ok)
    {
      plItem->plottable()->setName(newName);
      ui->customPlot->replot();
    }
  }
}

void MainWindow::selectionChanged()
{
  /*
   normally, axis base line, axis tick labels and axis labels are selectable separately, but we want
   the user only to be able to select the axis as a whole, so we tie the selected states of the tick labels
   and the axis base line together. However, the axis label shall be selectable individually.
   
   The selection state of the left and right axes shall be synchronized as well as the state of the
   bottom and top axes.
   
   Further, we want to synchronize the selection of the graphs with the selection state of the respective
   legend item belonging to that graph. So the user can select a graph by either clicking on the graph itself
   or on its legend item.
  */
  
  // make top and bottom axes be selected synchronously, and handle axis and tick labels as one selectable object:
  if (ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spTickLabels) ||
      ui->customPlot->xAxis2->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->xAxis2->selectedParts().testFlag(QCPAxis::spTickLabels))
  {
    ui->customPlot->xAxis2->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
    ui->customPlot->xAxis->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
  }
  // make left and right axes be selected synchronously, and handle axis and tick labels as one selectable object:
  if (ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spTickLabels) ||
      ui->customPlot->yAxis2->selectedParts().testFlag(QCPAxis::spAxis) || ui->customPlot->yAxis2->selectedParts().testFlag(QCPAxis::spTickLabels))
  {
    ui->customPlot->yAxis2->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
    ui->customPlot->yAxis->setSelectedParts(QCPAxis::spAxis|QCPAxis::spTickLabels);
  }
  
  // synchronize selection of graphs with selection of corresponding legend items:
  for (int i=0; i<ui->customPlot->graphCount(); ++i)
  {
    QCPGraph *graph = ui->customPlot->graph(i);
    QCPPlottableLegendItem *item = ui->customPlot->legend->itemWithPlottable(graph);
    if (item->selected() || graph->selected())
    {
      item->setSelected(true);
      graph->setSelected(true);
    }
  }
}

void MainWindow::mousePress()
{
  // if an axis is selected, only allow the direction of that axis to be dragged
  // if no axis is selected, both directions may be dragged
  
  if (ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeDrag(ui->customPlot->xAxis->orientation());
  else if (ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeDrag(ui->customPlot->yAxis->orientation());
  else
    ui->customPlot->axisRect()->setRangeDrag(Qt::Horizontal|Qt::Vertical);
}

void MainWindow::mouseWheel()
{
  // if an axis is selected, only allow the direction of that axis to be zoomed
  // if no axis is selected, both directions may be zoomed
  
  if (ui->customPlot->xAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeZoom(ui->customPlot->xAxis->orientation());
  else if (ui->customPlot->yAxis->selectedParts().testFlag(QCPAxis::spAxis))
    ui->customPlot->axisRect()->setRangeZoom(ui->customPlot->yAxis->orientation());
  else
    ui->customPlot->axisRect()->setRangeZoom(Qt::Horizontal|Qt::Vertical);
}
void MainWindow::clearGraphData(){
    for(int i=0;i<1000;i++){
        if(graphSelect==0){            m_nX[i]=0;        m_nY[i]=0;        }
        if(graphSelect==1){            m_nX1[i]=0;        m_nY1[i]=0;        }
        if(graphSelect==2){            m_nX2[i]=0;        m_nY2[i]=0;        }
        if(graphSelect==3){            m_nX3[i]=0;        m_nY3[i]=0;        }
        if(graphSelect==4){            m_nX4[i]=0;        m_nY4[i]=0;        }
        if(graphSelect==5){            m_nX5[i]=0;        m_nY5[i]=0;        }
        if(graphSelect==6){            m_nX6[i]=0;        m_nY6[i]=0;        }
    }
}

void MainWindow::addSineGraph(){
    graphSelect=2;
    // generate data:
    clearGraphData();
    for (int w=0; w<200; ++w)
    {
      m_nX2[w] = w;
      m_nY2[w]=1*sin(w/10.0);
    }
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Sine-%1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(m_nX2, m_nY2);
    ui->customPlot->graph()->setLineStyle(QCPGraph::lsLine);
//    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssStar));
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(2);
    ui->customPlot->graph()->setPen(graphPen);
    //ui->customPlot->graph()->rescaleAxes();
    ui->customPlot->replot();

    for(int i=0;i<200;i++){
        m_nX[i]=m_nX2[i];
        m_nY[i]=m_nY2[i];
    }

}
void MainWindow::addSawtoothGraph(){
    graphSelect=5;
    clearGraphData();
    double l_nYPoint =0.0,l_nDegree =0,l_nXPoint =0.0;
    unsigned int l_nSampleIndex=0;
    unsigned int l_nIndex =0;
    unsigned int l_nSamples=0;
    unsigned int l_nTemp=0;
    unsigned int l_nRemainder =0;
    double l_nConstValue = (2.0*3.14) *(float)(0.5);
    Q_UNUSED(l_nConstValue)
             l_nSamples = 100 / 5;
             l_nRemainder = (100%(int)5)/l_nSamples;
    double l_nPhaseAngle=0.0;
    l_nPhaseAngle = (l_nDegree*3.14) / 180.0;
    double l_nAmplitude = (10)*1;
    double l_nTempYPoint=0.0;
    double l_nTempAmp =0.0;
    if(10 >0.0)
        l_nTempAmp =1.0;

    while(l_nSampleIndex < (5+l_nRemainder))
    {
        for(;l_nIndex<100;l_nIndex++)
        {
            l_nTempYPoint =(l_nAmplitude) - (l_nAmplitude/3.14) * l_nPhaseAngle;
                    m_nY5[l_nIndex] = ((l_nTempAmp) - (l_nTempAmp/3.14) * l_nPhaseAngle);
            if( false == true)
                    l_nYPoint = l_nYPoint + 1.0;
            l_nPhaseAngle = (l_nPhaseAngle +sin((2*3.14) / (100/5)));
            m_nX5[l_nIndex] = l_nIndex;
            if(l_nPhaseAngle > (2*3.14))
                    l_nPhaseAngle = l_nPhaseAngle - (2*3.14);
        }
        l_nSamples -= l_nTemp;
        l_nSampleIndex++;

    }
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Sawtooth-%1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(m_nX5, m_nY5);
    ui->customPlot->graph()->setLineStyle(QCPGraph::lsLine);
//    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssStar));
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(2);
    ui->customPlot->graph()->setPen(graphPen);
    //ui->customPlot->graph()->rescaleAxes();
    ui->customPlot->replot();

    for(int i=0;i<100;i++){
        m_nX[i]=m_nX5[i];
        m_nY[i]=m_nY5[i];
    }
}

void MainWindow::addPulseGraph(){
    graphSelect=6;
    clearGraphData();
    double l_nYPoint =0.0,l_nDegree =0,l_nXPoint =0.0;
    double l_nConstValue = (2.0*3.14) *(float)(0.5);
    unsigned int l_nSampleIndex=0;
    unsigned int l_nIndex =0;
    unsigned int l_nSamples=0;

    unsigned int l_nRemainder =0;
    unsigned int l_nTemp=0;

    l_nSamples = 100 / 5;
    l_nRemainder = (100%(int)5)/l_nSamples;
    l_nTemp = l_nSamples;
    double l_nPhaseAngle=0.0;
    l_nPhaseAngle = (l_nDegree*3.14) / 180.0;
    double l_nAmplitude = (10);
    double l_nTempYPoint=0.0;
    double l_nTempAmp =0.0;
     double l_nYPoint1 =0.0;
    if(10 >0.0)
        l_nTempAmp =1.0;

    while(l_nSampleIndex < (5+l_nRemainder))
    {
        for(;l_nIndex<100;l_nIndex++)
        {

            if(l_nPhaseAngle < l_nConstValue){
                    l_nTempYPoint = -l_nAmplitude;
                m_nY6[l_nIndex] = l_nTempAmp;

            }
            else{
                    l_nTempYPoint = (l_nAmplitude);
                        m_nY6[l_nIndex] = -l_nTempAmp;
            }

            l_nPhaseAngle = (l_nPhaseAngle +(2*3.14) / (100/5));
            m_nX6[l_nIndex] = l_nIndex;
            if(l_nPhaseAngle > (2*3.14) )
                l_nPhaseAngle = l_nPhaseAngle - (2*3.14);
        }
        l_nSamples += l_nTemp;
        l_nSampleIndex++;
    }
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Pulse-%1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(m_nX6, m_nY6);
    ui->customPlot->graph()->setLineStyle(QCPGraph::lsLine);
//    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssStar));
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(2);
    ui->customPlot->graph()->setPen(graphPen);
    //ui->customPlot->graph()->rescaleAxes();
    ui->customPlot->replot();

    for(int i=0;i<100;i++){
        m_nX[i]=m_nX6[i];
        m_nY[i]=m_nY6[i];
    }
}

void MainWindow::addSquareGraph(){
    graphSelect=3;
    clearGraphData();
    double l_nYPoint =0.0,l_nDegree =90,l_nXPoint =0.0;
    double l_nConstValue = (2.0*3.14) *(float)(0.5);
    unsigned int l_nSampleIndex=0;
    unsigned int l_nIndex =0;
    unsigned int l_nSamples=0;
    unsigned int l_nRemainder =0;
    unsigned int l_nTemp=0;

    l_nSamples = 100 / 1;
    l_nRemainder = (100%1)/100;
    l_nTemp = l_nSamples;
    double l_nPhaseAngle=0.0;
    l_nPhaseAngle = (l_nDegree*3.14) / 180.0;
    double l_nAmplitude = (10)*1;

    double l_nTempYPoint=0.0;
    double l_nTempAmp =0.0;
    if(10 >0.0)
        l_nTempAmp =1.0;

    while(l_nSampleIndex < (1+l_nRemainder))
    {
        for(;l_nIndex<100;l_nIndex++)
        {

            if(l_nPhaseAngle < l_nConstValue){
                l_nTempYPoint = l_nAmplitude;
                    m_nY3[l_nIndex]  = l_nTempAmp;

            }
            else{
                l_nTempYPoint = -(l_nAmplitude);
                    m_nY3[l_nIndex]  = -l_nTempAmp;
            }
            if( false == true)
                l_nYPoint = l_nYPoint + 1.0;

            l_nPhaseAngle = (l_nPhaseAngle +(2*3.14) / (100/1));
            m_nX3[l_nIndex] = l_nIndex;
            //printf("Phase Angle : %f XPoint :%f YPoint : %f\n",l_nPhaseAngle,l_nXPoint,l_nYPoint);
            if(l_nPhaseAngle > (2*3.14) )
                l_nPhaseAngle = l_nPhaseAngle - (2*3.14);
        }
        l_nSamples += l_nTemp;
        l_nSampleIndex++;
    }

    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Square-%1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(m_nX3, m_nY3);
    ui->customPlot->graph()->setLineStyle(QCPGraph::lsLine);
//    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssStar));
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(2);
    ui->customPlot->graph()->setPen(graphPen);
    //ui->customPlot->graph()->rescaleAxes();
    ui->customPlot->replot();

    for(int i=0;i<100;i++){
        m_nX[i]=m_nX3[i];
        m_nY[i]=m_nY3[i];
    }
}

void MainWindow::addTriangleGraph(){
    graphSelect=4;
    clearGraphData();
    double l_nYPoint =0.0,l_nDegree =0,l_nXPoint =0.0;

    unsigned int l_nSampleIndex=0;
    unsigned int l_nIndex =0;
    unsigned int l_nSamples=0;
    unsigned int l_nRemainder =0;
    unsigned int l_nTemp=0;

    l_nSamples = 100 / 5;
    l_nRemainder = (100%(int)5)/100;

    double l_nPhaseAngle=0.0;
    l_nPhaseAngle = (l_nDegree*3.14) / 180.0;
    double l_nAmplitude = (10)*1;
    double l_nTempYPoint=0.0;
    double l_nTempAmp =0.0;
    if(10 >0.0)
        l_nTempAmp =1.0;

    while(l_nSampleIndex < (5+l_nRemainder))
    {

        for(l_nIndex=0;l_nIndex<100;l_nIndex++)
        {
            if(l_nPhaseAngle < 3.14)
            {
                    l_nTempYPoint = -(l_nAmplitude) + (2*l_nAmplitude/3.14) * l_nPhaseAngle;
                        m_nY4[l_nIndex]= -(l_nTempAmp) + (2*l_nTempAmp/3.14) * l_nPhaseAngle;
            }
            else
            {
                    l_nTempYPoint = 3*(l_nAmplitude) - (2*l_nAmplitude/3.14) * l_nPhaseAngle;
                        m_nY4[l_nIndex] = 3*(l_nTempAmp) - (2*l_nTempAmp/3.14) * l_nPhaseAngle;
            }
            if( false == true)
                m_nY4[l_nIndex] = l_nYPoint + 1.0;

            l_nPhaseAngle = (l_nPhaseAngle +(2*3.14) / (100/5));
            m_nX4[l_nIndex] = l_nIndex;
            if(l_nPhaseAngle > (2*3.14))
                l_nPhaseAngle = l_nPhaseAngle - (2*3.14);
        }
        l_nSamples += l_nTemp;
        l_nSampleIndex++;
    }
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Triangle-%1").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(m_nX4, m_nY4);
    ui->customPlot->graph()->setLineStyle(QCPGraph::lsLine);
//    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssStar));
    QPen graphPen;
    graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
    graphPen.setWidthF(2);
    ui->customPlot->graph()->setPen(graphPen);
    //ui->customPlot->graph()->rescaleAxes();
    ui->customPlot->replot();

    for(int i=0;i<100;i++){
        m_nX[i]=m_nX4[i];
        m_nY[i]=m_nY4[i];
    }
}

void MainWindow::addRandomGraph()
{
    graphSelect=1;
    clearGraphData();
  int n = 100; // number of points in graph
  double xScale = (rand()/(double)RAND_MAX + 0.5)*2;
  double yScale = (rand()/(double)RAND_MAX + 0.5)*2;
  double xOffset = (rand()/(double)RAND_MAX - 0.5)*4;
  double yOffset = (rand()/(double)RAND_MAX - 0.5)*5;
  double r1 = (rand()/(double)RAND_MAX - 0.5)*2;
  double r2 = (rand()/(double)RAND_MAX - 0.5)*2;
  double r3 = (rand()/(double)RAND_MAX - 0.5)*2;
  double r4 = (rand()/(double)RAND_MAX - 0.5)*2;
  QVector<double> x(n), y(n);
  for (int i=0; i<n; i++)
  {
    m_nX1[i] = 1*(i/(double)n-0.5)*10.0*xScale + xOffset;
    m_nY1[i] = 1    *(sin(x[i]*r1*5)*sin(cos(x[i]*r2)*r4*3)+r3*cos(sin(x[i])*r4*2))*yScale + yOffset;
  }
  
  ui->customPlot->addGraph();
  ui->customPlot->graph()->setName(QString("New graph %1").arg(ui->customPlot->graphCount()-1));
  ui->customPlot->graph()->setData(m_nX1, m_nY1);
  ui->customPlot->graph()->setLineStyle((QCPGraph::LineStyle)(rand()%5+1));
  if (rand()%100 > 75)
    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle((QCPScatterStyle::ScatterShape)(rand()%9+1)));
  QPen graphPen;
  graphPen.setColor(QColor(rand()%245+10, rand()%245+10, rand()%245+10));
  graphPen.setWidthF(rand()/(double)RAND_MAX*2+1);
  ui->customPlot->graph()->setPen(graphPen);
  //ui->customPlot->graph()->rescaleAxes();
  ui->customPlot->replot();

  for(int i=0;i<100;i++){
        m_nX[i]=m_nX1[i];
      m_nY[i]=m_nY1[i];
  }
}

void MainWindow::removeSelectedGraph()
{
  if (ui->customPlot->selectedGraphs().size() > 0)
  {
    ui->customPlot->removeGraph(ui->customPlot->selectedGraphs().first());
    ui->customPlot->replot();
  }
}

void MainWindow::removeAllGraphs()
{
  graphSelect=0;clearGraphData();
    graphSelect=1;clearGraphData();
      graphSelect=2;clearGraphData();
        graphSelect=3;clearGraphData();
          graphSelect=4;clearGraphData();
            graphSelect=5;clearGraphData();
              graphSelect=6;clearGraphData();

  ui->customPlot->clearGraphs();
  ui->customPlot->replot();
}

void MainWindow::contextMenuRequest(QPoint pos)
{
/*  QMenu *menu = new QMenu(this);
  menu->setAttribute(Qt::WA_DeleteOnClose);
  
  if (ui->customPlot->legend->selectTest(pos, false) >= 0) // context menu on legend requested
  {
    menu->addAction("Move to top left", this, SLOT(moveLegend()))->setData((int)(Qt::AlignTop|Qt::AlignLeft));
    menu->addAction("Move to top center", this, SLOT(moveLegend()))->setData((int)(Qt::AlignTop|Qt::AlignHCenter));
    menu->addAction("Move to top right", this, SLOT(moveLegend()))->setData((int)(Qt::AlignTop|Qt::AlignRight));
    menu->addAction("Move to bottom right", this, SLOT(moveLegend()))->setData((int)(Qt::AlignBottom|Qt::AlignRight));
    menu->addAction("Move to bottom left", this, SLOT(moveLegend()))->setData((int)(Qt::AlignBottom|Qt::AlignLeft));
  } else  // general context menu on graphs requested
  {
    menu->addAction("Add random graph", this, SLOT(addRandomGraph()));
    menu->addAction("Add Sine Wave",this,SLOT(addSineGraph()));
    menu->addAction("Add Square Wave",this,SLOT(addSquareGraph()));
    menu->addAction("Add Triangle Wave",this,SLOT(addTriangleGraph()));
    menu->addAction("Add Sawtooth Wave",this,SLOT(addSawtoothGraph()));
    menu->addAction("Add Pulse Wave",this,SLOT(addPulseGraph()));
    if (ui->customPlot->selectedGraphs().size() > 0)
      menu->addAction("Remove selected graph", this, SLOT(removeSelectedGraph()));
    if (ui->customPlot->graphCount() > 0)
      menu->addAction("Remove all graphs", this, SLOT(removeAllGraphs()));
  }
  
  menu->popup(ui->customPlot->mapToGlobal(pos));*/
}

void MainWindow::moveLegend()
{
  if (QAction* contextAction = qobject_cast<QAction*>(sender())) // make sure this slot is really called by a context menu action, so it carries the data we need
  {
    bool ok;
    int dataInt = contextAction->data().toInt(&ok);
    if (ok)
    {
      ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, (Qt::Alignment)dataInt);
      ui->customPlot->replot();
    }
  }
}

void MainWindow::graphClicked(QCPAbstractPlottable *plottable)
{
  ui->statusBar->showMessage(QString("Clicked on graph '%1'.").arg(plottable->name()), 1000);
}





void MainWindow::MergeAll()
{
    graphSelect=0;
//    clearGraphData();
//    for(int i=0;i<100;i++){
//        m_nX[i]=i;
//
//        if((m_nY1[i]>m_nY2[i])&&(m_nY1[i]>m_nY3[i])&&(m_nY1[i]>m_nY4[i])&&(m_nY1[i]>m_nY5[i])&&(m_nY1[i]>m_nY6[i]))
//            m_nY[i]=m_nY1[i];
//        else if((m_nY2[i]>m_nY1[i])&&(m_nY2[i]>m_nY3[i])&&(m_nY2[i]>m_nY4[i])&&(m_nY2[i]>m_nY5[i])&&(m_nY2[i]>m_nY6[i]))
//            m_nY[i]=m_nY2[i];
//        else if((m_nY3[i]>m_nY2[i])&&(m_nY3[i]>m_nY1[i])&&(m_nY3[i]>m_nY4[i])&&(m_nY3[i]>m_nY5[i])&&(m_nY3[i]>m_nY6[i]))
//            m_nY[i]=m_nY3[i];
//        else if((m_nY4[i]>m_nY2[i])&&(m_nY4[i]>m_nY3[i])&&(m_nY4[i]>m_nY1[i])&&(m_nY4[i]>m_nY5[i])&&(m_nY4[i]>m_nY6[i]))
//            m_nY[i]=m_nY4[i];
//        else if((m_nY5[i]>m_nY2[i])&&(m_nY5[i]>m_nY3[i])&&(m_nY5[i]>m_nY4[i])&&(m_nY5[i]>m_nY1[i])&&(m_nY5[i]>m_nY6[i]))
//            m_nY[i]=m_nY5[i];
//        else
//            m_nY[i]=m_nY6[i];
//    }
    ui->customPlot->clearGraphs();
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setName(QString("Merged").arg(ui->customPlot->graphCount()-1));
    ui->customPlot->graph()->setData(m_nX, m_nY);
    ui->customPlot->graph()->setLineStyle(QCPGraph::lsLine);
//    ui->customPlot->graph()->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssStar));
    QPen graphPen;
    graphPen.setColor(QColor(22,68,153));
    graphPen.setWidthF(2);
    ui->customPlot->graph()->setPen(graphPen);
//    //ui->customPlot->graph()->rescaleAxes();
    ui->customPlot->replot();
//    for(int i=0;i<100;i++){
//        if(m_nX[i]==0 && m_nX1[i]==0 && m_nX2[i]==0 && m_nX3[i]==0 && m_nX4[i]==0 && m_nX5[i]==0 && m_nX6[i]==0 && m_nY[i]==0 && m_nY1[i]==0 && m_nY2[i]==0 && m_nY3[i]==0 && m_nY4[i]==0 && m_nY5[i]==0 && m_nY6[i]==0)
//            ui->customPlot->clearGraphs();
//
//       }
}

void MainWindow::on_actionSine_triggered()
{
    addSineGraph();
}

void MainWindow::on_actionSquare_triggered()
{
    addSquareGraph();
}

void MainWindow::on_actionTriangle_triggered()
{
    addTriangleGraph();
}

void MainWindow::on_actionSAwtooth_triggered()
{
    addSawtoothGraph();
}

void MainWindow::on_actionPulse_triggered()
{
    addPulseGraph();
}

void MainWindow::on_actionMerge_All_triggered()
{
    MergeAll();
}

void MainWindow::on_actionRandom_triggered()
{
    addRandomGraph();
}

void MainWindow::on_actionRemove_All_triggered()
{
    removeAllGraphs();
}

void MainWindow::on_actionRemove_Selected_triggered()
{
    removeSelectedGraph();
}

void MainWindow::on_actionZoomin_triggered()
{
}

void MainWindow::on_actionZoom_Out_triggered()
{
}

void MainWindow::on_butMergeAll_clicked(){
    MergeAll();
}

void MainWindow::on_butRandom_clicked(){
addRandomGraph();

}

void MainWindow::on_butPulse_clicked(){
addPulseGraph();
}

void MainWindow::on_butSawtooth_clicked(){
addSawtoothGraph();
}

void MainWindow::on_butTriangle_clicked(){
addTriangleGraph();
}

void MainWindow::on_butSquare_clicked(){
addSquareGraph();
}

void MainWindow::on_butSine_clicked(){
addSineGraph();
}

void MainWindow::on_butRemoveSelected_clicked(){
removeSelectedGraph();
}

void MainWindow::on_butRemoveAll_clicked(){
removeAllGraphs();
}

void MainWindow::on_butExit_clicked()
{
    this->close();
}



void MainWindow::on_butZoomOut_clicked()
{

}

void MainWindow::on_butZoomIn_clicked()
{

}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void MainWindow::receiveValue(double pValue){

}
void MainWindow::receiveValue(QString pValue){

}
void MainWindow::receiveValue(uint pValue){

}
void MainWindow::callLineEditInput(int leFocussed){

}
