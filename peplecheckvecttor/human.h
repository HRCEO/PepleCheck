#pragma once
#include "stdafx.h"

using namespace std;

class CHuman
{
public:  // �ܺ� ���� ����

	// ������
	CHuman(CString name, int age, float height, CString eye);

	// �Ӽ�
	CString m_name;
	float m_height;
	CString m_eye;

	// ����
	void Add_age();
	void Do_surgery(CString eye);

	int getAge(); // m_age ������ ����ϱ� ���ؼ�

private: // ���� ���� �Ұ�
	int m_age;
};