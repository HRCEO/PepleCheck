#include "stdafx.h"
#include "human.h"

CHuman::CHuman(CString name, int age, float height, CString eye)
{
	m_name = name;
	m_age = age;
	m_height = height;
	m_eye = eye;
}

void CHuman::Add_age()
{
	m_age++;
}
void CHuman::Do_surgery(CString eye)
{
	m_eye = eye;
}
int CHuman::getAge()
{
	return m_age;
}