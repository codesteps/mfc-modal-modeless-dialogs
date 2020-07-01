
// MFCDialogDemoDlg.h : header file
//

#pragma once


// CMFCDialogDemoDlg dialog
class CMFCDialogDemoDlg : public CDialogEx
{
// Construction
public:
	CMFCDialogDemoDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCDIALOGDEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

//
	CDialog m_dlg;


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();	
	afx_msg void OnBnClickedButtonModeless();
	afx_msg void OnBnClickedButtonModal();
};
