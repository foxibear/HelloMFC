
// HelloMFC.h : HelloMFC ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CHelloMFCApp:
// �� Ŭ������ ������ ���ؼ��� HelloMFC.cpp�� �����Ͻʽÿ�.
//

class CHelloMFCApp : public CWinApp
{
public:
	CHelloMFCApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHelloMFCApp theApp;
