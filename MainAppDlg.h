#pragma once

class CMainAppDlg : public CDialogEx {
  // Construction
public:
  CMainAppDlg(CWnd *pParent = nullptr); // standard constructor
  enum { IDD = IDD_MAINAPP_DIALOG };

protected:
  virtual void DoDataExchange(CDataExchange *pDX); // DDX/DDV support

  // Implementation
protected:
  virtual BOOL OnInitDialog();
  DECLARE_MESSAGE_MAP()
public:
	CString m_name;
	CString m_email;
	afx_msg void OnBnClickedQuit();

	afx_msg void start() {
		STARTBUTTON();
	}

	void STARTBUTTON();

private:
};
