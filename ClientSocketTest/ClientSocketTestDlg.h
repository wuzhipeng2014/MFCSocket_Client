
// ClientSocketTestDlg.h : ͷ�ļ�
//

#pragma once
#include "ClientSocket.h"
class CClientSocket;


// CClientSocketTestDlg �Ի���
class CClientSocketTestDlg : public CDialogEx
{
// ����
public:
	CClientSocketTestDlg(CWnd* pParent = NULL);	// ��׼���캯��
	CClientSocket m_ClientSocket;

// �Ի�������
	enum { IDD = IDD_CLIENTSOCKETTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonStartconnection();
};
