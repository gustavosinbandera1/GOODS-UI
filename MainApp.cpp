#include "pch.h"
#include "MainApp.h"
#include "MainAppDlg.h"

#include "MainFrame.h"

BEGIN_MESSAGE_MAP(CMainApp, CWinApp)

END_MESSAGE_MAP()

CMainApp::CMainApp() {

}

CMainApp::~CMainApp() {
	delete m_pMainWnd;
}

BOOL CMainApp::InitInstance() {
	CWinApp::InitInstance();
	m_pMainWnd = new CMainFrame;
	m_pMainWnd->ShowWindow(SW_NORMAL); //SW_SHOW
	m_pMainWnd->UpdateWindow();
	
/*
  CWinApp::InitInstance();
  CMainAppDlg dlg;
  m_pMainWnd = &dlg;
  INT_PTR nResponse = dlg.DoModal();
  */
  return TRUE;
}

// The one and only CMainAppApp object

CMainApp theApp; //start the application