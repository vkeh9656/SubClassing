
// SubClassingDlg.h: 헤더 파일
//

#pragma once
#include "MyButton.h"

// CSubClassingDlg 대화 상자
class CSubClassingDlg : public CDialogEx
{
private:
	MyButton m_plus_btn, m_minus_btn;

// 생성입니다.
public:
	CSubClassingDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUBCLASSING_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedPlusBtn();
	afx_msg void OnBnClickedMinusBtn();
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
