
// QSrever.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CQSreverApp: 
// �йش����ʵ�֣������ QSrever.cpp
//

class CQSreverApp : public CWinApp
{
public:
	CQSreverApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CQSreverApp theApp;