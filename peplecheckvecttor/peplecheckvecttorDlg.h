
// peplecheckvecttorDlg.h: 헤더 파일
//

#pragma once
#include "stdafx.h"
#include "human.h"
#include <vector>

// CpeplecheckvecttorDlg 대화 상자
class CpeplecheckvecttorDlg : public CDialogEx
{
// 생성입니다.
public:
	CpeplecheckvecttorDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.
	std::vector<int> number;
	std::vector<CHuman> People;
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PEPLECHECKVECTTOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
