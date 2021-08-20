#include <iostream>

using namespace std;

#include "Ex_String.h"

int Mystring::m_nCount = 0;
//�⺻ ������
Mystring::Mystring()
{
	m_nCount++;

	m_nLength = 0;
	m_pszData = NULL;
	cout << "Mystring�� �⺻������" << endl;

}

//��ȯ ������
Mystring::Mystring(const char* pszParam) 
	:m_nLength(0),m_pszData(NULL)
{
	
	/*m_nLength = 0;
	m_pszData = NULL;*/
	cout << "Mystring�� ��ȯ������" << endl;
	SetString(pszParam);
}

//���� ������
Mystring::Mystring(const Mystring& pszParam) 
	:m_nLength(0), m_pszData(NULL)
{
	
	cout << "Mystring�� ���������" << endl;
	SetString(pszParam.Getstring());
}


Mystring::~Mystring()
{
	m_nCount--;
	Release();
}

Mystring& Mystring:: operator=(const Mystring& right)
{
	if (this != &right)
		this->SetString(right.Getstring());

	return *this;
}

int Mystring::SetString(const char* pszParam)
{

	Release();// ���� ������ ����

	if (pszParam == NULL)
		return 0;

	int nLength = strlen(pszParam);
	if (nLength == 0)
		return 0;

	m_pszData = new char[nLength + 1];
	strcpy_s(m_pszData,sizeof(char)*(nLength +1), pszParam);
	m_nLength = nLength;

	return 0;
	
	
}
const char* Mystring::Getstring() const
{
	return m_pszData;
}
void Mystring::Release()
{
	if (m_pszData != NULL)
		delete[] m_pszData;

	m_pszData = NULL;
	m_nLength = NULL;
}