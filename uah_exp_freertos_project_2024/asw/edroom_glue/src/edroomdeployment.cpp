//##############################################################################
//###############     This file has been generated by EDROOM     ###############
//##############################################################################
 
 
#include <edroom_glue/edroomdeployment.h>
 
//*****************************************************************************
//Main Wait
 
void MainWait(UAHExplorer   &comp1,
					CCExplorerManager   &comp2,
					CCTM_ChannelCtrl   &comp3,
					CCHK_FDIRMng   &comp4,
					CCBKGTCExec   &comp5,
					CCGuidance   &comp6){
 
	Pr_Time waitTime(3, 0);
 
#ifdef _EDROOM_SYSTEM_CLOSE
	while(!comp1.EDROOMIsComponentFinished()
				||!comp2.EDROOMIsComponentFinished()
				||!comp3.EDROOMIsComponentFinished()
				||!comp4.EDROOMIsComponentFinished()
				||!comp5.EDROOMIsComponentFinished()
				||!comp6.EDROOMIsComponentFinished())
#else
	while(true)
#endif

 
		Pr_DelayIn(waitTime);
}
 
//*****************************************************************************
//SetMemory
 
void CEDROOMSystemMemory::SetMemory(){
 
	comp1Memory.SetMemory(10, comp1Messages, &comp1MessagesMarks[0]
					,13,comp1QueueNodes, &comp1QueueNodesMarks[0]);
	comp2Memory.SetMemory(10, comp2Messages, &comp2MessagesMarks[0]
					,11,comp2QueueNodes, &comp2QueueNodesMarks[0]);
	comp3Memory.SetMemory(10, comp3Messages, &comp3MessagesMarks[0]
					,10,comp3QueueNodes, &comp3QueueNodesMarks[0]);
	comp4Memory.SetMemory(10, comp4Messages, &comp4MessagesMarks[0]
					,14,comp4QueueNodes, &comp4QueueNodesMarks[0]);
	comp5Memory.SetMemory(10, comp5Messages, &comp5MessagesMarks[0]
					,11,comp5QueueNodes, &comp5QueueNodesMarks[0]);
	comp6Memory.SetMemory(10, comp6Messages, &comp6MessagesMarks[0]
					,14,comp6QueueNodes, &comp6QueueNodesMarks[0]);
}
 
//*****************************************************************************
//SetComponents
 
void CEDROOMSystemCommSAP::SetComponents(UAHExplorer   *p_comp1,
										CCExplorerManager   *p_comp2,
										CCTM_ChannelCtrl   *p_comp3,
										CCHK_FDIRMng   *p_comp4,
										CCBKGTCExec   *p_comp5,
										CCGuidance   *p_comp6){
	mp_comp1=p_comp1;
	mp_comp2=p_comp2;
	mp_comp3=p_comp3;
	mp_comp4=p_comp4;
	mp_comp5=p_comp5;
	mp_comp6=p_comp6;
}
 
 
//*****************************************************************************
//*****************************************************************************
//Signal Translation Functions
//*****************************************************************************
//*****************************************************************************
 
 
TEDROOMSignal CEDROOMSystemCommSAP::C6Guidance_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl4(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCGuidance::STxTM):	 signalIn=CCTM_ChannelCtrl::STxTM; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C3TM_ChannelCtrl_PTMChannelCtrl4__C6Guidance_PTMChannelCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCTM_ChannelCtrl::STMQueued):	 signalIn=CCGuidance::STMQueued; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C2ExplorerManager_PGuidance__C6Guidance_PGuidance(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCExplorerManager::SGuidance):	 signalIn=CCGuidance::SGuidance; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C6Guidance_PGuidance__C2ExplorerManager_PGuidance(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C5BKGTCExec_PBKGExecCtrl__C2ExplorerManager_PBKGExecCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C2ExplorerManager_PBKGExecCtrl__C5BKGTCExec_PBKGExecCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCExplorerManager::SBKGTC):	 signalIn=CCBKGTCExec::SBKGTC; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C3TM_ChannelCtrl_PTMChannelCtrl3__C5BKGTCExec_PTMChannelCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCTM_ChannelCtrl::STMQueued):	 signalIn=CCBKGTCExec::STMQueued; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C5BKGTCExec_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl3(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCBKGTCExec::STxTM):	 signalIn=CCTM_ChannelCtrl::STxTM; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C4HK_FDIRMng_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl2(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCHK_FDIRMng::STxTM):	 signalIn=CCTM_ChannelCtrl::STxTM; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C3TM_ChannelCtrl_PTMChannelCtrl2__C4HK_FDIRMng_PTMChannelCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCTM_ChannelCtrl::STMQueued):	 signalIn=CCHK_FDIRMng::STMQueued; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C2ExplorerManager_PHK_FDIRCtrl__C4HK_FDIRMng_PHK_FDIRCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCExplorerManager::SHK_FDIR_TC):	 signalIn=CCHK_FDIRMng::SHK_FDIR_TC; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C4HK_FDIRMng_PHK_FDIRCtrl__C2ExplorerManager_PHK_FDIRCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C2ExplorerManager_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCExplorerManager::STxTM):	 signalIn=CCTM_ChannelCtrl::STxTM; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
TEDROOMSignal CEDROOMSystemCommSAP::C3TM_ChannelCtrl_PTMChannelCtrl__C2ExplorerManager_PTMChannelCtrl(TEDROOMSignal signalOut){
 
	TEDROOMSignal signalIn;
 
	switch(signalOut){
 
		case( CCTM_ChannelCtrl::STMQueued):	 signalIn=CCExplorerManager::STMQueued; break;
 
		default: signalIn=(TEDROOMSignal)(-1); break;
 
	}
	return signalIn;
 
}
 
 
 
//*****************************************************************************
//RegisterInterfaces
 
void CEDROOMSystemCommSAP::RegisterInterfaces(){
 
	// Register Interface for Component 1
	m_localCommSAP.RegisterInterface(1, mp_comp1->Timer, mp_comp1);
 
	// Register Interface for Component 2
	m_localCommSAP.RegisterInterface(1, mp_comp2->Guidance, mp_comp2);
	m_localCommSAP.RegisterInterface(2, mp_comp2->EvActionQueue, mp_comp2);
	m_localCommSAP.RegisterInterface(3, mp_comp2->BKGExecCtrl, mp_comp2);
	m_localCommSAP.RegisterInterface(4, mp_comp2->HK_FDIRCtrl, mp_comp2);
	m_localCommSAP.RegisterInterface(5, mp_comp2->RxTC, mp_comp2);
	m_localCommSAP.RegisterInterface(6, mp_comp2->TMChannelCtrl, mp_comp2);
 
	// Register Interface for Component 3
	m_localCommSAP.RegisterInterface(1, mp_comp3->TMChannelCtrl4, mp_comp3);
	m_localCommSAP.RegisterInterface(2, mp_comp3->TMChannelCtrl3, mp_comp3);
	m_localCommSAP.RegisterInterface(3, mp_comp3->TMChannelCtrl2, mp_comp3);
	m_localCommSAP.RegisterInterface(4, mp_comp3->TMChannelCtrl, mp_comp3);
 
	// Register Interface for Component 4
	m_localCommSAP.RegisterInterface(1, mp_comp4->HK_FDIRCtrl, mp_comp4);
	m_localCommSAP.RegisterInterface(2, mp_comp4->TMChannelCtrl, mp_comp4);
	m_localCommSAP.RegisterInterface(3, mp_comp4->HK_FDIRTimer, mp_comp4);
 
	// Register Interface for Component 5
	m_localCommSAP.RegisterInterface(1, mp_comp5->BKGExecCtrl, mp_comp5);
	m_localCommSAP.RegisterInterface(2, mp_comp5->TMChannelCtrl, mp_comp5);
 
	// Register Interface for Component 6
	m_localCommSAP.RegisterInterface(1, mp_comp6->GuidanceTimer, mp_comp6);
	m_localCommSAP.RegisterInterface(2, mp_comp6->TMChannelCtrl, mp_comp6);
	m_localCommSAP.RegisterInterface(3, mp_comp6->Guidance, mp_comp6);
 
}
 
 
//*****************************************************************************
////SetLocalConnections
 
void CEDROOMSystemCommSAP::SetLocalConnections(){
 
	m_localCommSAP.Connect(mp_comp6->TMChannelCtrl, mp_comp3->TMChannelCtrl4, connections[0], 
					C6Guidance_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl4, 
					C3TM_ChannelCtrl_PTMChannelCtrl4__C6Guidance_PTMChannelCtrl);
 
	m_localCommSAP.Connect(mp_comp2->Guidance, mp_comp6->Guidance, connections[1], 
					C2ExplorerManager_PGuidance__C6Guidance_PGuidance, 
					C6Guidance_PGuidance__C2ExplorerManager_PGuidance);
 
	m_localCommSAP.Connect(mp_comp5->BKGExecCtrl, mp_comp2->BKGExecCtrl, connections[2], 
					C5BKGTCExec_PBKGExecCtrl__C2ExplorerManager_PBKGExecCtrl, 
					C2ExplorerManager_PBKGExecCtrl__C5BKGTCExec_PBKGExecCtrl);
 
	m_localCommSAP.Connect(mp_comp3->TMChannelCtrl3, mp_comp5->TMChannelCtrl, connections[3], 
					C3TM_ChannelCtrl_PTMChannelCtrl3__C5BKGTCExec_PTMChannelCtrl, 
					C5BKGTCExec_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl3);
 
	m_localCommSAP.Connect(mp_comp4->TMChannelCtrl, mp_comp3->TMChannelCtrl2, connections[4], 
					C4HK_FDIRMng_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl2, 
					C3TM_ChannelCtrl_PTMChannelCtrl2__C4HK_FDIRMng_PTMChannelCtrl);
 
	m_localCommSAP.Connect(mp_comp2->HK_FDIRCtrl, mp_comp4->HK_FDIRCtrl, connections[5], 
					C2ExplorerManager_PHK_FDIRCtrl__C4HK_FDIRMng_PHK_FDIRCtrl, 
					C4HK_FDIRMng_PHK_FDIRCtrl__C2ExplorerManager_PHK_FDIRCtrl);
 
	m_localCommSAP.Connect(mp_comp2->TMChannelCtrl, mp_comp3->TMChannelCtrl, connections[6], 
					C2ExplorerManager_PTMChannelCtrl__C3TM_ChannelCtrl_PTMChannelCtrl, 
					C3TM_ChannelCtrl_PTMChannelCtrl__C2ExplorerManager_PTMChannelCtrl);
 
}
 
 
//*****************************************************************************
////SetRemoteConnections
 
void CEDROOMSystemCommSAP::SetRemoteConnections(){
 
}
 
//*****************************************************************************
////SetConnections
 
void CEDROOMSystemCommSAP::SetConnections(){
 
	SetLocalConnections();
	SetRemoteConnections();
 
}
 
//*****************************************************************************
////CEDROOMSystemDeployment Constructor
 
CEDROOMSystemDeployment::CEDROOMSystemDeployment(){
 
#ifdef CONFIG_EDROOMSL_ADD_TRACE
#endif
	systemMemory.SetMemory();
 
}
 
//*****************************************************************************
////Config
 
void CEDROOMSystemDeployment::Config(UAHExplorer   *p_comp1,
											CCExplorerManager   *p_comp2,
											CCTM_ChannelCtrl   *p_comp3,
											CCHK_FDIRMng   *p_comp4,
											CCBKGTCExec   *p_comp5,
											CCGuidance   *p_comp6){
 
	mp_comp1=p_comp1;
	mp_comp2=p_comp2;
	mp_comp3=p_comp3;
	mp_comp4=p_comp4;
	mp_comp5=p_comp5;
	mp_comp6=p_comp6;
 
	systemCommSAP.SetComponents(	p_comp1,
									p_comp2,
									p_comp3,
									p_comp4,
									p_comp5,
									p_comp6);
 
	systemCommSAP.RegisterInterfaces();
	systemCommSAP.SetConnections();
 
}
 
//*****************************************************************************
////StartComponents
 
void CEDROOMSystemDeployment::StartComponents(){
	mp_comp1->EDROOMStart();
	mp_comp2->EDROOMStart();
	mp_comp3->EDROOMStart();
	mp_comp4->EDROOMStart();
	mp_comp5->EDROOMStart();
	mp_comp6->EDROOMStart();
 
}
 
//*****************************************************************************
////Start
 
void CEDROOMSystemDeployment::Start(){
 
#ifdef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	Pr_Task MainTask(CEDROOMSystemDeployment::main_task,EDROOMprioMINIMUM,1024*16);
 
	kernel.Start();
 
#else
 
StartComponents();
 
	kernel.Start();
 
	MainWait(*mp_comp1,
				*mp_comp2,
				*mp_comp3,
				*mp_comp4,
				*mp_comp5,
				*mp_comp6);
 
 
#endif
 
}
 
#ifdef CONFIG_EDROOMBP_DEPLOYMENT_NEED_TASK
 
	extern CEDROOMSystemDeployment systemDeployment;
 
 
//*****************************************************************************
////main_task
 
 
Pr_TaskRV_t CEDROOMSystemDeployment::main_task(Pr_TaskP_t){
 
	systemDeployment.StartComponents();
	MainWait(*systemDeployment.mp_comp1,
				*systemDeployment.mp_comp2,
				*systemDeployment.mp_comp3,
				*systemDeployment.mp_comp4,
				*systemDeployment.mp_comp5,
				*systemDeployment.mp_comp6);
 
}
#endif
