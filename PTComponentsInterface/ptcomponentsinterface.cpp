#include "ptcomponentsinterface.h"

#include <QPluginLoader>
#include <QtPlugin>

PTComponentsInterface::PTComponentsInterface(QObject *parent):QObject(parent)
{
	qDebug()<<"PTComponents Interface Initiated";
	pluginDMM=pluginFG=pluginSL=pluginVI=pluginICM=pluginDSO=0;
	ptDMM=ptVI=ptSL=ptFG=ptICM=ptDSO=0;
}

void PTComponentsInterface::RegisterPTWidget(unsigned int pCatID)
{
//    m_PTFactories[pCatID]= dynamic_cast<QWidget*>(IDMM->getPTWidget());
//    m_PTFactories[pCatID]= dynamic_cast<QWidget*>(IFG->getPTWidget());
//    m_PTFactories[pCatID]= dynamic_cast<QWidget*>(ISL->getPTWidget());
//    m_PTFactories[pCatID]= dynamic_cast<QWidget*>(IVI->getPTWidget());
}
void PTComponentsInterface::LoadDMMPlugins()
{
    //DMM
	qDebug()<<"load DMM plugins";

		pluginDMM = new QPluginLoader("libDMMInterface.so",this);
		ptDMM = pluginDMM->instance();
		qDebug()<<"pluginDMM->instance() --> "<<ptDMM;
		IDMM =qobject_cast<IPTDMMInterface*>(ptDMM);
    	m_PTFactories[IDMM->getGUID()]= dynamic_cast<QWidget*>(IDMM->getPTWidget());
    //}
}

void PTComponentsInterface::LoadDSOPlugins()
{
	qDebug()<<"load DSO plugin";
    pluginDSO=new QPluginLoader("libDSOInterface.so",this);
    ptDSO = pluginDSO->instance();
    IDSO =qobject_cast<IPTDSOInterface*>(ptDSO);
    m_PTFactories[IDSO->getGUID()]= dynamic_cast<QWidget*>(IDSO->getPTWidget());

}
void PTComponentsInterface::LoadFGPlugins(){
    //FG
	qDebug()<<"load FG plugins";

    pluginFG=new QPluginLoader("libFGInterface.so",this);
    ptFG = pluginFG->instance();
    IFG =qobject_cast<IPTFGInterface*>(ptFG);
    m_PTFactories[IFG->getGUID()]= dynamic_cast<QWidget*>(IFG->getPTWidget());
}
void PTComponentsInterface::LoadVIPlugins(){
//VI
	qDebug()<<"load VI plugins";

	pluginVI=new QPluginLoader("libVIInterface.so",this);
	ptVI = pluginVI->instance();
	IVI =qobject_cast<IPTVIInterface*>(ptVI);
	m_PTFactories[IVI->getGUID()]= dynamic_cast<QWidget*>(IVI->getPTWidget());

}
void PTComponentsInterface::LoadSLPlugins(){
 //SL
	qDebug()<<"load SL plugins";

	pluginSL=new QPluginLoader("libSLInterface.so",this);
	ptSL = pluginSL->instance();
	ISL =qobject_cast<IPTSLInterface*>(ptSL);
	m_PTFactories[ISL->getGUID()]= dynamic_cast<QWidget*>(ISL->getPTWidget());
}
void PTComponentsInterface::LoadICMPlugins(){
 //SL
	qDebug()<<"load ICM plugins";

	pluginICM=new QPluginLoader("libICMUIInterface.so",this);
	ptICM = pluginICM->instance();
	IICM =qobject_cast<IPTICMInterface*>(ptICM);
	m_PTFactories[IICM->getGUID()]= dynamic_cast<QWidget*>(IICM->getPTWidget());
}

void PTComponentsInterface::LoadPTPlugins()
{
	qDebug()<<"load multiple plugins";
    //DMM
    QPluginLoader pluginDMM("libDMMInterface.so",this);
    QObject *ptDMM = pluginDMM.instance();
    IDMM =qobject_cast<IPTDMMInterface*>(ptDMM);
    m_PTFactories[IDMM->getGUID()]= dynamic_cast<QWidget*>(IDMM->getPTWidget());

    //FG
    QPluginLoader pluginFG("libFGInterface.so",this);
    QObject *ptFG = pluginFG.instance();
    IFG =qobject_cast<IPTFGInterface*>(ptFG);
    m_PTFactories[IFG->getGUID()]= dynamic_cast<QWidget*>(IFG->getPTWidget());


    //VI
    QPluginLoader pluginVI("libVIInterface.so",this);
    QObject *ptVI = pluginVI.instance();
    IVI =qobject_cast<IPTVIInterface*>(ptVI);
    m_PTFactories[IVI->getGUID()]= dynamic_cast<QWidget*>(IVI->getPTWidget());


     //SL
    QPluginLoader pluginSL("libSLInterface.so",this);
    QObject *ptSL = pluginSL.instance();
    ISL =qobject_cast<IPTSLInterface*>(ptSL);
    m_PTFactories[ISL->getGUID()]= dynamic_cast<QWidget*>(ISL->getPTWidget());

    //ICM
    QPluginLoader pluginICM("libICMUIInterface.so",this);
	ptICM = pluginICM.instance();
	IICM =qobject_cast<IPTICMInterface*>(ptICM);
	m_PTFactories[IICM->getGUID()]= dynamic_cast<QWidget*>(IICM->getPTWidget());

}

QWidget* PTComponentsInterface::InvokeApplication(unsigned pCatdID)
{
	qDebug()<<"inside Invoke application";

		return m_PTFactories[pCatdID];
}

void PTComponentsInterface::removePlugin(unsigned int pCatID)
{

	qDebug()<< "Remove Plugin";
	m_PTFactories[pCatID] =0;
	//delete m_PTFactories[pCatID];
}

Q_EXPORT_PLUGIN2(PTComponentsInterface, PTComponentsInterface)
