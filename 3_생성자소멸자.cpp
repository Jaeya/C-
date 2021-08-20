//#define ON_MAIN
#ifdef ON_MAIN

#include <stdio.h>//C header
#include <iostream>//C++ header

using namespace std;

// Ŭ���� ����(������Ÿ��)

int main()
{
	class CTest
	{
	public:
		CTest()
		{
			cout << " CTest::CTest() " << endl;
		}
		~CTest()
		{
			cout << " ~CTest::CTest() " << endl;
		}



	};

	// �����ڿ� �Ҹ���

	if (0)
	{
		
		//// 1. ��ü����
		//cout << " --����-- " << endl;
		//CTest a; // ������
		//cout << " --��-- " << endl;

		// 2. ��ü�� ��������
		cout << " --���� ����-- " << endl;
		CTest* p = new CTest;
		//...
		delete p;
		cout << " --���� ��-- " << endl;


	}

	// ����Ʈ ������
	if (0)
	{
		class CTest
		{
		public:
			CTest(void) { m_nData = 20; }
			//int m_nData = 10;
			int m_nData;

		};
		CTest a;
		cout << a.m_nData << endl;
	}

	// �����ڿ� �ʱ�ȭ ���
	if (0)
	{
		class CTest
		{
			int m_nData; // �⺻ ���� �����ڴ� private ��

		public :
			CTest(void) : m_nData(20) // �ʱ�ȭ ���
			{
				//m_nData = 20;
				cout << "CTest()" << endl;
			}
			CTest(int nParam) : m_nData(nParam) // �ʱ�ȭ ���
			{
				//m_nData = nParam;
				cout << "CTest(int nParam)" << endl;
			}
			~CTest()
			{
				cout << "~CTest()" << endl;

			}
		};

		cout << "main ����" << endl;
		CTest a;
		CTest b(100);

		cout << "main ��" << endl;

	}

	// ������ �����ε�
	// Getter / Setter
	if (1)
	{
		class CTest
		{
		public :
			CTest(int a) : m_nData(a) { cout << "1" << endl; };
			CTest(int a ,int b) : m_nData(a+b) { cout << "2" << endl; };
			CTest(int a, int b, int c) : m_nData(a + b + c) { cout << "3" << endl; };
			CTest(int a, int b, int c, int d) : m_nData(a + b + c + d) { cout << "4"<< endl; };

			
			// Getter �Լ�
			int GetData(void) const
			{ 
				return m_nData; 
			}

			//Setter �Լ�
			void SetData(int a) 
			{ 
				if (a < 0)
					m_nData = 0;
				else
					m_nData = a;
				
				
			}

		private :
			int m_nData;

		};

		CTest x(10);
		CTest y(10, 20);
		CTest z(10, 20, 30);
		CTest x1(10,20,30,40);
		//CTest ();
		//CTest z; // error ==> �ش� �����ڰ� ���� ����

		cout << x.GetData() << endl; // 10
		cout << y.GetData() << endl; // 30
		cout << z.GetData() << endl; // 30
		cout << x1.GetData() << endl; // 100
		//cout <<	.GetData() << endl;


	}
	return 0;
}



#endif