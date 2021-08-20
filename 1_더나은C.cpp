//#define ON_MAIN

#ifdef ON_MAIN

#include<stdio.h> // C header
#include<iostream>// C++ header

using namespace std;

int g_nData = 10;
void Gugudan(void)
{

	cout << "Global::Gugudan()" << endl;
}

namespace TEST
{
	int g_nData = 100;
	void Gugudan(void)
	{
		cout << "TEST::Gugudan()" << endl;
	}

}

void Swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Swap :" << " a = " << a << ", b = " << b << endl;

}

void Swap2(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout << "Swap2 :" << " a = " << *a << ", b = " << *b << endl;

}

void Swap3(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Swap3 :" << " a = " << a << ", b = " << b << endl;

}

int Sum(int a, int b)
{
	cout << "Sum(int a, int b )" << endl;
	return a + b;
}
int Sum(int a, int b, int c)
{
	cout << "Sum(int a, int b, int c)" << endl;
	return a + b + c;
}

int Sum(double a, double b)
{
	cout << "Sum(int a, int b)" << endl;
	return a + b;
}

int TestFunc(int a = 10)
{
	return a;
}

int TestFunc2(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

#define ADD(a,b) (a+b) // ��ũ��(C ����)

int Add(int a, int b)
{
	return a + b;
}

inline int AddNew(int a, int b)// �ζ����Լ� (C++ ����)
{
	return a + b;
}

int main()
{
	//cout ��ü
	if (0) {
		int a = 10;
		int b = 20;

		printf("a =%d,b =%d\n", a, b);
		std::cout << "a= " << a << ", b= " << b << "\n";

		cout << a << endl; // "\n"
		cout << &a << endl; // "\n"
		cout << sizeof(a) << endl; // "\n"
		cout << printf << endl; // "\n"
		cout << main << endl; // "\n"

		cout << "Bye" << "\n";
	}

	//cin ��ü
	if (0)
	{
		int nAge;
		cout << "���̸� �Է��ϼ���" << endl;
		cin >> nAge;
		//scanf("%d", &nAge);

		string strName;
		cout << "�̸��� �Է��ϼ���" << endl;
		cin >> strName;

		char strJob[30];
		cout << "������ �Է��ϼ���" << endl;
		cin >> strJob;

		cout << "�̸� : " << strName << endl;
		cout << "���� : " << strJob << endl;
		cout << "���� : " << nAge << endl;

	}
	//auto
	if (0)
	{
		int a = 10;
		int b(a);
		auto c(a);

		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}

	//���ӽ����̽�
	if (0)
	{
		Gugudan();
		TEST::Gugudan();

		using namespace TEST;
		//Gugudan();//??????
		::Gugudan();// OK
	}
	//Pointer VS Reference(CPP)
	if (0)
	{
		//Pointer(c)--------------
		int a = 10;
		int* p1 = &a;

		cout << sizeof(a) << endl;
		cout << sizeof(p1) << endl;

		char b = 'a';
		char* p2 = &b;

		cout << sizeof(b) << endl; // 1B
		cout << sizeof(p2) << endl; // 4B

		//Reference(CPP)------------------
		int nData = 10;
		int& ref = nData;//���۷���(����)


		nData++; //11
		cout << nData << endl;
		cout << ref << endl;

		ref++;
		cout << nData << endl;
		cout << ref << endl;

	}
	// function ȣ�� ���
	if (0)
	{
		int a = 10;
		int b = 20;
		cout << " a= " << a << ", b = " << b << endl;
		// C���
		// 1) Call by Value(���� ����) -----------> ��� ����. ������ ���� ����
		a = 10; b = 20;
		Swap(a, b);
		cout << " a= " << a << ", b = " << b << endl;

		// 2) Call by Address(�ּ��� ����) ----------> ��� ��ƴ�. ������ ����
		a = 10; b = 20;
		Swap2(&a, &b);
		cout << " a= " << a << ", b = " << b << endl;
		// CPP ���
		// 3) Call by Reference --------------> ��� ����. ������ ����
		a = 10; b = 20;
		Swap3(a, b);
		cout << " a= " << a << ", b = " << b << endl;
	}
	// function �����ε�(��������) ---- by ���Ӹͱ۸�
	if (0)
	{
		cout << Sum(10, 20) << endl;
		cout << Sum(10, 20, 30) << endl;
		cout << Sum(10.5, 20.5) << endl;

	}

	// ����Ʈ �Ű�����
	if (0)
	{
		cout << TestFunc(100) << endl; // 100
		cout << TestFunc() << endl; // 10

		//cout << TestFunc2() << endl; // error
		cout << TestFunc2(1) << endl; //1+20+30
		cout << TestFunc2(1, 2) << endl; // 1+2+30
		cout << TestFunc2(1, 2, 3) << endl; // 6

	}

	// �����޸�(c: malloc/free)
	if (0)
	{
		int* p = (int*)malloc(sizeof(int) * 4);
		p[0] = 10;
		p[1] = 20;
		p[2] = 30;
		p[3] = 40;
		free(p);

		// c++: new / delete
		int* p2 = new int;
		*p2 = 100;

		int* p3 = new int(10);

		cout << *p2 << endl;
		cout << *p3 << endl;


		delete p2;
		delete p3;


		////////////////////////////
		//�迭
		int* p4 = new int[5];
		for (int i = 0; i < 5; i++)
		{
			p4[i] = i * 10;
			cout << p4[i] << endl;
		}

		delete[] p4;
	}
	// ������� for��
	if (0)
	{
		//int aList[5] = { 10,20,30,40,50 };
		int aList[5] = { 10,20,30,};

		for (int i = 0; i < 5; i++)
		{
			cout << aList[i] << endl;
		}
		
		for (auto& x : aList)
		{
			cout << x << endl;
		}
	}


	// �ζ��� �Լ�
	if (1)
	{
		int a = 10;
		int b = 20;

		cout << Add(a, b) << endl; // �Լ� ȣ��(C ����)
		cout << ADD(a, b) << endl; // ��ũ��(C ����)
		cout << AddNew(a, b) << endl; // �ζ����Լ�(C++ ����)

	}
	return 0; // ��������
}


#endif