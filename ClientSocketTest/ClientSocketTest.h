
// ClientSocketTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CClientSocketTestApp: 
// �йش����ʵ�֣������ ClientSocketTest.cpp
//

class CClientSocketTestApp : public CWinApp
{
public:
	CClientSocketTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CClientSocketTestApp theApp;