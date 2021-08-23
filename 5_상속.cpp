//#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

int main()
{
	if (0)
	{
		/*class Student
		{
			string name;
			int age;
			int kor, end, math;
		};

		class Professor
		{
			string name;
			int age;
			string major;

		};*/

		class People
		{
		public:
			string name;
			int age;
			double id;
		private:
			int x;
		protected:
			int y;
		};

		class Student : public People
		{
		public:
			int kor, eng, math;
		};
		
		class Professor : public People
		{
		public:
			string major;
		};

		Student a;
		a.name = "ȫ�浿";
		a.kor = 100;
		a.math = 90;
		a.eng = 80;

		Professor b;
		b.name = "��ȣ��";
		b.major = "������";

	}

	//��Ӱ� ����������
	if (0)
	{
		class Base
		{
		private :
			int data1; // �ڽ� Ŭ���������� ���ٰ��� �ڤýĵ� ����
		protected:
			int data2;// �ڽŰ� �Ļ� Ŭ�������� ���ٰ���
		public:
			int data3;// ��� ���� ���� ����
		};

		class Derived : public Base
		{
		public:
			void func()
			{
				//data1 = 10; // error : private
				data2 = 10;
				data3 = 10;

			}
		};

		Derived x;
		//x.data1= 10;
		//x.data2 = 20;
		x.data3 = 30;
	}

	// ��Ӱ� ������/�Ҹ���
	if (0)
	{
		class AAA
		{
		public:
			AAA() 
			{ 
				cout << "AAA()" << endl; 
			}
			AAA(int a) { cout << "AAA(int)" << endl; }

			~AAA() { cout << "~AAA()" << endl; }

		};
		class BBB : public AAA
		{
		public:
			BBB() { cout << "BBB()" << endl; }
			BBB(int a) { cout << "BBB(int)" << endl; }

			~BBB() { cout << "~BBB()" << endl; }

		};
		class CCC : public BBB
		{
		public:
			CCC() { cout << "CCC()" << endl; }
			CCC(int a) : BBB(a){ cout << "CCC(int)" << endl; }

			~CCC() { cout << "~CCC()" << endl; }

		};

		CCC y(10);
	}

	// ��Ӱ� ������/�Ҹ��� = �ʱ�ȭ/������ ����
	if (0)
	{
		class AAA
		{
		protected:
			char* m_pData;

		public:
			AAA()
			{
				cout << "AAA()" << endl;
				m_pData = new char[32];
			}
			AAA(int a) { cout << "AAA(int)" << endl; }

			~AAA() 
			{ 
				cout << "~AAA()" << endl; 
				delete[] m_pData;
			}

		};
		class BBB : public AAA
		{
		public:
			BBB() { cout << "BBB()" << endl; }
			BBB(int a) { cout << "BBB(int)" << endl; }

			~BBB() { cout << "~BBB()" << endl; }

		};
		class CCC : public BBB
		{
		public:
			CCC() { cout << "CCC()" << endl; }
			CCC(int a) : BBB(a) { cout << "CCC(int)" << endl; }

			~CCC() 
			{ 
				cout << "~CCC()" << endl;
				delete[] m_pData;
			}

		};

		CCC y(10);
	}

	// ����� �̿��� ����߰�(��ɺ���)

	if (0)
	{
		/////////////////
		class CGrade
		{
		private:     // ������ ���� �Ұ���
			int m_nGrade = 0;//������ ��ȿ���� : 0~100��

		public:        // ������ ���� ����
			int GetGrade() { return m_nGrade; }
			void SetGrade(int nParam) { m_nGrade = nParam; }

		protected:     // �Ļ� Ŭ������ ���� ����
			void PrintGrade()
			{
				cout << "���� : " << m_nGrade << endl;
			}
		};

		class CGradeEx : public CGrade
		{
		public:        // ������ ���� ����
			void TestFunc()
			{
				SetGrade(5);//public
				PrintGrade();//protected
			}

			//������(�������̵�)
			void SetGrade(int nParam)
			{
				// �Է� �������� ���� �����ϴ� ���ο� ����� �߰��Ѵ�.
				if (nParam < 0)
					CGrade::SetGrade(0);
				else if (nParam > 100)
					CGrade::SetGrade(100);
				else
					CGrade::SetGrade(nParam);
			}
		};



	}

	
	
	return 0;
}

#endif
