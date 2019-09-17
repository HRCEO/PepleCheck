
// peplecheckvecttorDlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "peplecheckvecttor.h"
#include "peplecheckvecttorDlg.h"
#include "afxdialogex.h"
#include "human.h"
#include <vector>


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CpeplecheckvecttorDlg 대화 상자



CpeplecheckvecttorDlg::CpeplecheckvecttorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PEPLECHECKVECTTOR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CpeplecheckvecttorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CpeplecheckvecttorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CpeplecheckvecttorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CpeplecheckvecttorDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CpeplecheckvecttorDlg 메시지 처리기

BOOL CpeplecheckvecttorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CpeplecheckvecttorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CpeplecheckvecttorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CpeplecheckvecttorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CpeplecheckvecttorDlg::OnBnClickedButton1()
{
	/*
	vector<CHuman*> People; // People 이란 벡터를 생성

	//CHuman human1(_T("홍길동"), 20, 180.0f, _T("Black"));
	//CHuman human2(_T("성춘향"), 25, 170.0f, _T("Blue"));
	
		//객체를 백터에 넣는 방법 -2
		People.push_back(new CHuman(_T("홍길동"), 20, 180.0f, _T("Black")));
		People.push_back(new CHuman(_T("성춘향"), 25, 170.0f, _T("Blue")));
	/* 객체를 백터에 넣는 방법 -2
		People.push_back(human1); 
		People.push_back(human2);
		// 이렇기 하면 벡터에 human1의 객체와 human2의 객채가 들어가있는겄이다(ex. People[0] == human1) 그래서 백터는 배열처럼 접근이 가능하다.
	for (int i = 0; i < 2; i++)
	{
		if (People[i]->m_name == "성춘향")
		{
			MessageBox(_T("춘향이 눈색깔 :")+People[i]->m_eye);
			break;
		}
	}
	*/
	// 사람을 하나하나 추가하기가 너무 어렵고 힘드니 벡터를 만들것이다. 벡터는 지역변수로 만들것이다.  왜? 나는 사람을 증가시키는데에 사용할것이기 떄문인다.
	//human1.Add_age();
	//human2.Add_age();    // 주석이 처리되면 두개의 객체는 같은 구조이지만 행위가 달리지었다. 객채 형식인것이다.
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.


	/*
	CHuman h1(_T("성춘향"), 21, 160.0f, _T("Black"));
	CHuman h2(_T("성춘향"), 21, 160.0f, _T("Black"));
	// 이 두 객채는 전혀 다른 객체 사람이다. h2 에 대하여 어떠한 함수를 수행한들 h1은 변화 되지 않기 떄문인다.
	*/

	//vector<int> number;  // 전역 변수로 넣어 주었으니 주석 처리
	People.push_back(CHuman(_T("홍길동"), 20, 180.0f, _T("Black")));
	People.push_back(CHuman(_T("성춘향"), 21, 170.0f, _T("Black")));
	int a = 55;
	number.push_back(a);
	number.push_back(3);
	number.push_back(5);
	number.push_back(7);
}
void CpeplecheckvecttorDlg::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다
	// 저장된 데이터의 나이를 결합하여 표현하기.
	float sum = 0;
	for (int i = 0; i < 2; i++)
	{
		sum += People[i].getAge();
	}
	sum = sum / 2.0f;
	CString aveAge;
	aveAge.Format(_T("평균나이 : %f"), sum);
	MessageBox(aveAge);

	//MessageBox(People[i].m_name);
	/* 
	CString num;
	num.Format(_T("%d"), number[i]);   // 메세지 박스에는 문자열이 들어가야 하기 때문에  문자열로 바꾸어서 넣어 주었다.    Cstring -> int
	MessageBox(num);
	*/
}
