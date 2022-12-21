// MyButton.cpp: 구현 파일
//

#include "pch.h"
#include "SubClassing.h"
#include "MyButton.h"


// MyButton

IMPLEMENT_DYNAMIC(MyButton, CButton)

MyButton::MyButton()
{

}

MyButton::~MyButton()
{
}


BEGIN_MESSAGE_MAP(MyButton, CButton)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_TIMER()
END_MESSAGE_MAP()



// MyButton 메시지 처리기




void MyButton::OnLButtonDown(UINT nFlags, CPoint point)
{
	SetTimer(1, 500, NULL);

	CButton::OnLButtonDown(nFlags, point);
}


void MyButton::OnLButtonUp(UINT nFlags, CPoint point)
{
	KillTimer(1);
	KillTimer(2);

	CButton::OnLButtonUp(nFlags, point);
}


void MyButton::OnTimer(UINT_PTR nIDEvent)
{
	if (nIDEvent == 1)
	{
		KillTimer(1);
		SetTimer(2, 20, NULL);
	}
	else if (nIDEvent == 2)
	{
		GetParent()->SendMessage(WM_COMMAND, MAKEWPARAM(GetDlgCtrlID(), 20000), (LPARAM)m_hWnd);
	}

	CButton::OnTimer(nIDEvent);
}
