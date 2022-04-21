#pragma once

#include "resource.h"		// main symbols

class CMainApp : public CWinApp
{
public:
	CMainApp();
	virtual ~CMainApp();
// Overrides
public:
	virtual BOOL InitInstance();
	DECLARE_MESSAGE_MAP()
};

extern CMainApp theApp;
