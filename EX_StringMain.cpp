#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

#include "Ex_String.h"

//int Mystring::m_nCount = 0;
int main()
{
	// C�� ���ڿ� ó��
	if (0)
	{
		char a = 'a'; // 1����

		int kor = 90;
		int math[10] = { 100,90,80,88, }; // ������ �ڷḦ �� �����̸����� ��Ƽ� ����

		char name[] = "�����";


		//���ڿ� �Լ�
		//name = "���缮"; // �� �� �Ҵ�
		//strcpy(name, "���缮");
		//if (name == "���缮") // ��
		//if (strcpy(name, "���缮") == 0);

	}

	// C++�� ���ڿ�
	if (0)
	{
		string a;// �ʱⰪ ����
		cout << a << endl;

		a = "���缮"; // ���� �Ҵ�
		cout << a << endl;

		string b(a);// �ʱⰪ ����
		cout << b << endl;

		string c("����ѹ�");// �ʱⰪ ����
		cout << c << endl;
	}


	//���� ���� MyString ��ü ���
	if (0)
	{
		string x; // -----------------------�⺻ ������
		x.assign("ȫ�浿");
		x.append("�ٺ�");
		//x.clear();
		cout << x << endl;

		string y("���缮"); // -----------------------��ȯ ������
		cout << y << endl;
		
		string z(y);// ----------------------���� ������
		cout << z << endl;

		z = x;
		cout << z << endl;

			
		Mystring a; // -----------------------�⺻ ������
		a.SetString("�����");
		//cout << a << endl; // error
		cout << a.Getstring() << endl;

		Mystring b("�ڸ��"); // --------------------��ȯ ������
		cout <<  b.Getstring() << endl;
		b.SetString("����");

		Mystring c(b);// ----------------------���� ������
		cout << c.Getstring() << endl;

		c = a;
		cout << c.Getstring() << endl;

		
	}	
	

	//���� ���(����,�Լ�)
	if (1)
	{
		cout << Mystring::m_nCount << endl;
		Mystring a;
		Mystring b;
		cout << a.m_nCount << endl;

		{
			Mystring c;
			cout << "��" << c.m_nCount << endl;
		}
		cout << b.m_nCount << endl;


	}
	return 0;
}

#endif