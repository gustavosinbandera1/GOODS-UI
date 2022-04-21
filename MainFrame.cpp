#include "pch.h"
#include <afx.h>
#include "MainFrame.h"

// menu IDs definition  
#define NEW 22001
#define OPEN 22002
#define SAVE 22003
#define EXIT 22004

CMainFrame::CMainFrame() {

  Create(NULL, TEXT("Menus Fundamentals"), WS_OVERLAPPEDWINDOW,
         CRect(200, 120, 640, 400));

  // ------ add menu first way -----//
  //pCurrentMenu = new CMenu;
  //pCurrentMenu->LoadMenu(MAKEINTRESOURCE(IDR_MENU));

  VERIFY(m_wndMainMenu.CreateMenu());
  VERIFY(m_wndFileMenu.CreateMenu());
  VERIFY(this->m_wndEditMenu.CreateMenu());
  VERIFY(this->m_wndHelpMenu.CreateMenu());
 
  //--  file menu --//
  m_wndFileMenu.AppendMenu(MF_STRING, NEW, _T("New"));
  m_wndFileMenu.AppendMenu(MF_STRING, OPEN, _T("Open"));
  m_wndFileMenu.AppendMenu(MF_STRING, SAVE, _T("Save"));
  m_wndFileMenu.AppendMenu(MF_SEPARATOR, NULL, _T("-"));
  m_wndFileMenu.AppendMenu(MF_STRING | MF_DISABLED, EXIT, _T("Exit"));
	
  //--- edit menu --//
  m_wndEditMenu.AppendMenu(MF_STRING, 22004, _T("Cut"));
  m_wndEditMenu.AppendMenu(MF_STRING, 22005, _T("Copy"));

  //--- help menu --//
  m_wndHelpMenu.AppendMenu(MF_STRING, 22005,
	  _T("About this Application"));


  //-- attaching menus to main menu --//
  m_wndMainMenu.AppendMenu(MF_POPUP,
	  reinterpret_cast<UINT_PTR>(this->m_wndFileMenu.m_hMenu),
	  _T("File"));

  m_wndMainMenu.AppendMenu(MF_POPUP | MF_HELP,
	  reinterpret_cast<UINT_PTR>(this->m_wndEditMenu.m_hMenu),
	  _T("Edit"));
  m_wndMainMenu.AppendMenu(MF_POPUP | MF_HELP,
	  reinterpret_cast<UINT_PTR>(this->m_wndHelpMenu.m_hMenu),
	  _T("Help"));
  
  SetMenu(&m_wndMainMenu);
}

CMainFrame::~CMainFrame() {

}

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_COMMAND(22001, &endThisApp)
END_MESSAGE_MAP()



void CMainFrame::endThisApp() {
	PostQuitMessage(0);
}
