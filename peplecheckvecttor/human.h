#pragma once
#include "stdafx.h"

using namespace std;

class CHuman
{
public:  // 외부 접근 가능

	// 생성자
	CHuman(CString name, int age, float height, CString eye);

	// 속성
	CString m_name;
	float m_height;
	CString m_eye;

	// 행위
	void Add_age();
	void Do_surgery(CString eye);

	int getAge(); // m_age 변수를 사용하기 위해서

private: // 위부 접근 불가
	int m_age;
};