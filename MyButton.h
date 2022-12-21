#pragma once


// MyButton

class MyButton : public CButton
{
	DECLARE_DYNAMIC(MyButton)

public:
	MyButton();
	virtual ~MyButton();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};


