#ifndef ARBITARY_H
#define ARBITARY_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QDebug>
#include <QGraphicsTextItem>
#include "plotter.h"
#include "Waveformclass.h"

namespace Ui {
    class Arbitary;
}
class waveItem;
class Arbitary : public QWidget {
    Q_OBJECT
public:
    Arbitary(QWidget *parent = 0);
    ~Arbitary();
    void createGridPanel();
    void createLabels();
    void updateXAxis();
    void updateYAxis();
    void updateWaveform();
    waveItem* getWaveItem();


protected:
    waveItem *m_objWaveItem;
    QList<waveItem*> m_lstWaveItems;
    qreal m_nWidth,m_nHeight;
    short int m_nSelectedItemIndex;

    QGraphicsTextItem *objGraphicsText[10];
    QGraphicsTextItem *objGraphicsTextX[20];
    QGraphicsView *m_objGridview;
    QGraphicsScene *m_objGridscene;
    QGraphicsRectItem *m_objGridItem;
    QRectF m_nRectF;
    qreal m_nMargin;
    bool m_nTextCreated;
    double m_nAmplitude;
    double m_nFrequency;
    double m_nTime;
    int waveCount;
    void changeEvent(QEvent *e);

private:
    Ui::Arbitary *ui;

private slots:
    void on_userDefined_2_clicked();
    void on_spinAmplitude_valueChanged(double );
    void on_spinFrequency_valueChanged(double );
    void on_cmbFrequency_currentIndexChanged(int index);
    void on_userDefined_clicked();
    void on_dc_clicked();
    void on_triangle_clicked();
    void on_ramp_clicked();
    void on_square_clicked();
    void on_sine_clicked();
    void on_cmbAmplitude_currentIndexChanged(int index);
};
class waveItem:public QGraphicsItem
{
public:
    waveItem(m_eWaveSelection p_waveType,QGraphicsItem *parent=0):QGraphicsItem(parent)
    {
        qDebug() << "Inside WaveItem Constructor";
        m_waveType = p_waveType;
        this->setFlags(QGraphicsItem::ItemIsMovable|QGraphicsItem::ItemIsSelectable);
        m_objWaveData = new stWaveData();

        initialiseWaveData();
    }
    QRectF boundingRect() const
    {
        return QRectF(32, 10, 150, 75);
    }


    void zoomItem(double pFactor)
    {

        double l_nWidth = transform().mapRect(m_objWaveRect).width();
        double l_nHeight = transform().mapRect(m_objWaveRect).height();
        l_nWidth *=pFactor;
        l_nHeight*=pFactor;
        if(l_nWidth>=50 && l_nWidth<=690){
             setWidthRect(l_nWidth);
             setHeightRect(l_nHeight);
             scale(pFactor, pFactor);
        }
//        else if (l_nHeight >=50 && l_nHeight<=480)
//            scale(pFactor,pFactor);
        else
            return;
    }



    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget)
    {
        qDebug()<<"Inside WaveItem Paint";
        Q_UNUSED(option);
        Q_UNUSED(widget);
        painter->setRenderHint(QPainter::Antialiasing);
        if(isRemoveBorder==true)
            painter->setBrush(QBrush(m_objColor));
        else{
            painter->setPen(Qt::NoPen);
            painter->setBrush(QBrush(Qt::NoBrush));
        }
        m_objWaveRect.setX(32);
        m_objWaveRect.setY(10);
        m_objWaveRect.setWidth(150);
        m_objWaveRect.setHeight(75);

        painter->drawRect(m_objWaveRect);
        m_objSelectedRect = m_objWaveRect;
        switch(m_waveType)
        {
        case SINE:
            {
                qDebug()<<"Draw Sine Wave";
                FGProduct->GenerateOscillatorPattern("SINE",0,true);

            }
            break;
        case SQUARE:
             {
                qDebug()<<"Draw Square Wave";
                m_objWaveData->m_nDutyCycles=0.5;
                FGProduct->GenerateOscillatorPattern("SQUARE",0,true);
             }
            break;
        case TRIANGLE:
            {
                qDebug()<<"Draw Triangle Wave";
                FGProduct->GenerateOscillatorPattern("TRIANGLE",0,true);
            }
            break;
        case RAMP:
            {
                qDebug()<<"Draw Ramp Wave";
                FGProduct->GenerateOscillatorPattern("RAMP",0,true);
            }
            break;
        case NOISE:
            {
                qDebug()<<"Draw Noise Wave";
            }
            break;
        case DC:
            {
                //m_objWaveData->m_nDutyCycles=0.5;
                FGProduct->GenerateOscillatorPattern("SQUARE",0,true);
            }
            break;
        }
        drawWaveForm(painter);
    }
    qreal getHeight() const
    {
        return m_objWaveRect.height();
    }
    qreal getWidth() const
    {
        return m_objWaveRect.width();
    }

    void setHeightRect(qreal pHeight)
    {
        m_objWaveRect.setHeight(pHeight);
    }

    void setWidthRect(qreal pWidth)
    {
        m_objWaveRect.setWidth(pWidth);
    }

    qreal getXPos() const
    {
        return matrix().mapRect(m_objWaveRect).x();
    }
    qreal getYPos() const
    {
        return matrix().mapRect(m_objWaveRect).y();
    }

    void updateRect()
    {
        isRemoveBorder=false;
        update();
    }

    m_eWaveSelection getWaveType()const
    {
        return m_waveType;
    }

protected:
    m_eWaveSelection m_waveType;
    QColor m_objColor;
    bool isRemoveBorder;

    void drawWaveForm(QPainter *painter)
    {

         painter->setClipRect(m_objWaveRect.adjusted(+1,+1,-1,-1));
         QVector<QPointF> l_nData = FGProduct->getWavePoints();
         QPolygonF polyline(l_nData.count());

         double dx=0.0,dy=0.0;
         double y =0.0,x=0.0;

         // maxX - XUnits minX - m_nMinX
         //maxY - YUnits minY - m_nMinY

         // spanX - return maxX - minX;
         // spanY - return maxY - minY;
         for(int j=0; j< l_nData.count();++j)
         {
              dx = l_nData[j].x();
              dy = l_nData[j].y();
              x = (m_objWaveRect.left()+ (dx*(((m_objWaveRect.width()-1)))/(m_objWaveData->m_nScreenTime-m_objWaveData->m_nMinX)));
              y = ((m_objWaveRect.height()/1.5) - ((dy)*((m_objWaveRect.height()-1))/(m_objWaveData->m_nScreenAmplitude-m_objWaveData->m_nMinY)));
              //x = (m_objWaveRect.left()+ (dx*(((m_objWaveRect.width()-1)))));///(m_objWaveData->m_nXunits-m_objWaveData->m_nMinX)));
              //y=  ((m_objWaveRect.height()/2) - ((dy)*((m_objWaveRect.height()-1))));///(m_objWaveData->m_nYunits - m_objWaveData->m_nMinY)));
              polyline[j] = QPointF(x,y);

         }
         painter->setPen(Qt::cyan);
         painter->drawPolyline(polyline);

    }

    void initialiseWaveData()
    {
        setWaveData();
        qDebug() << "Init Window Factory";
        FGProduct = (IWaveProduct*) m_objWaveFactory->getPatternProduct("Oscillator");
        qDebug() << "Init Window Product";
        FGProduct->LoadPlotterData("./25.txt", m_objWaveData);
    }
    void setWaveData()
    {
        m_objWaveData->m_nAmplitude = 0.6;
        m_objWaveData->m_nFrequency = 1.0;
        m_objWaveData->m_nSteps= 0;
        m_objWaveData->m_nSamples = 100;
        m_objWaveData->m_nScreenAmplitude = 0.6;
        m_objWaveData->m_nTimeperSample = 0.01;
        m_objWaveData->m_nScreenTime = 1.0;
        m_objWaveData->m_nXunits = 10.0;
        m_objWaveData->m_nYunits = 8.0;
        m_objWaveData->m_nMinX =0.0;
        m_objWaveData->m_nMinY =-0.6;
        m_objWaveData->m_nPhase =0.0;
        m_objWaveData->m_nOffset =0.0;
        m_objWaveData->m_nDutyCycles =0.0;
        m_objWaveData->m_nCycles = 1.0;
        m_objWaveData->m_nPreamble =0;
        m_objWaveData->m_nPostamble=0;
        m_objWaveData->m_bUniPolar = false;
        m_objWaveData->m_nSteps =0.0;
        m_objWaveData->m_nVRef =0.6;
        m_objWaveData->m_bCalibChecked = false;
        m_objWaveData->m_nCalibrationConstant =0.0;
        m_objWaveData->m_nCalibrationGain=0.0;
        m_objWaveData->m_nResolution =14;

        m_objColor.setRed(88);
        m_objColor.setGreen(88);
        m_objColor.setBlue(89);
        m_objColor.setAlpha(30);
        isRemoveBorder=true;

    }
    stWaveData *m_objWaveData;
    WaveFormFactory *m_objWaveFactory;
    IWaveProduct *FGProduct;
    QPixmap m_objpixmap;
    QRectF m_objWaveRect,m_objSelectedRect;

};
#endif // ARBITARY_H
