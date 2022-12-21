﻿
// SubClassing.cpp: 애플리케이션에 대한 클래스 동작을 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "SubClassing.h"
#include "SubClassingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSubClassingApp

BEGIN_MESSAGE_MAP(CSubClassingApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CSubClassingApp 생성

CSubClassingApp::CSubClassingApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CSubClassingApp 개체입니다.

CSubClassingApp theApp;


// CSubClassingApp 초기화

BOOL CSubClassingApp::InitInstance()
{	
	CWinApp::InitInstance();

	CSubClassingDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

