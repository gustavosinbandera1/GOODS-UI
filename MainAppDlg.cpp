#include "pch.h"
#include "MainApp.h"
#include "MainAppDlg.h"
#include "afxdialogex.h"
#include "resource.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CMainAppDlg::CMainAppDlg(CWnd *pParent /*=nullptr*/)
    : CDialogEx(CMainAppDlg::IDD, pParent), m_name(_T("Testing here")),
      m_email(_T("Read Only box ...")) {
	//SetMenu(pCurrentMenu);
	//DrawMenuBar();
}

void CMainAppDlg::DoDataExchange(CDataExchange *pDX) {
  CDialogEx::DoDataExchange(pDX);
  DDX_Text(pDX, CE_INPUT, m_name);
  DDV_MaxChars(pDX, m_name, 25);
  DDX_Text(pDX, CE_OUTPUT, m_email);
  DDV_MaxChars(pDX, m_email, 25);
}

BEGIN_MESSAGE_MAP(CMainAppDlg, CDialogEx)
ON_BN_CLICKED(ID_QUIT, &CMainAppDlg::OnBnClickedQuit)
ON_COMMAND(CB_START, start)
END_MESSAGE_MAP()

// CMainAppDlg message handlers

BOOL CMainAppDlg::OnInitDialog() {
  CDialogEx::OnInitDialog();
  return TRUE; // return TRUE  unless you set the focus to a control
}

//
void CMainAppDlg::OnBnClickedQuit() {
  MessageBox(L"BYEttttttssss ");
  // TODO: Add your control notification handler code here
  //CDialogEx::OnOK();
}

void CMainAppDlg::STARTBUTTON() {
  MessageBox(L"BYE ");
  CButton *pStart = (CButton *)GetDlgItem(CB_START)->EnableWindow(false);
}
