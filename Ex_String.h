#pragma once


class Mystring
{
public:
	Mystring(); // �⺻ ������
	Mystring(const char* pszParam); // ��ȯ ������
	Mystring(const Mystring& pszParam); // ��ȯ ������

	~Mystring();

	//������ �����ε�
	// 
	// left = right
	Mystring& operator=(const Mystring& rhs);

	//������� ����(=Ŭ������ �������)
	
	static int m_nCount;// ������� ������ �ν��Ͻ��� ���� ������

private:
	
	char* m_pszData; // �����޸�(4b)--> malloc/free
	int m_nLength; // ���ڿ��� ����

public:
	int SetString(const char* pszParam);
	const char* Getstring() const;
private:
	void Release(); //���� �޸� �����Լ�
	
		
};