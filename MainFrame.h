#pragma once
#include <afxwin.h>
#include "resource.h"

class CMainFrame : public CFrameWnd {
public:
	CMainFrame();
	virtual ~CMainFrame();
	
private:
	CMenu *pCurrentMenu;

	CMenu m_wndMainMenu;
	CMenu m_wndFileMenu;
	CMenu m_wndEditMenu;
	CMenu m_wndHelpMenu;

public:
	afx_msg void endThisApp();
	DECLARE_MESSAGE_MAP()
};

