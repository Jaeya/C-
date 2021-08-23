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
		a.name = "홍길동";
		a.kor = 100;
		a.math = 90;
		a.eng = 80;

		Professor b;
		b.name = "강호동";
		b.major = "기계공학";

	}

	//상속과 접근지정자
	if (0)
	{
		class Base
		{
		private :
			int data1; // 자신 클래스에서만 접근가능 자ㅓ식도 못함
		protected:
			int data2;// 자신과 파생 클래스에서 접근가능
		public:
			int data3;// 모든 곳에 저근 가능
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

	// 상속과 생성자/소멸자
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

	// 상속과 생성자/소멸자 = 초기화/뒷정리 주의
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

	// 상속을 이용한 기능추가(기능보정)

	if (0)
	{
		/////////////////
		class CGrade
		{
		private:     // 누구도 접근 불가능
			int m_nGrade = 0;//점수의 유효범위 : 0~100점

		public:        // 누구나 접근 가능
			int GetGrade() { return m_nGrade; }
			void SetGrade(int nParam) { m_nGrade = nParam; }

		protected:     // 파생 클래스만 접근 가능
			void PrintGrade()
			{
				cout << "점수 : " << m_nGrade << endl;
			}
		};

		class CGradeEx : public CGrade
		{
		public:        // 누구나 접근 가능
			void TestFunc()
			{
				SetGrade(5);//public
				PrintGrade();//protected
			}

			//재정의(오버라이딩)
			void SetGrade(int nParam)
			{
				// 입력 데이터의 값을 보정하는 새로운 기능을 추가한다.
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
