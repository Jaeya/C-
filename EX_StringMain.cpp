#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

#include "Ex_String.h"

//int Mystring::m_nCount = 0;
int main()
{
	// C의 문자열 처리
	if (0)
	{
		char a = 'a'; // 1글자

		int kor = 90;
		int math[10] = { 100,90,80,88, }; // 동형의 자료를 한 변수이름으로 모아서 관리

		char name[] = "김상재";


		//문자열 함수
		//name = "유재석"; // 새 값 할당
		//strcpy(name, "유재석");
		//if (name == "유재석") // 비교
		//if (strcpy(name, "유재석") == 0);

	}

	// C++의 문자열
	if (0)
	{
		string a;// 초기값 없음
		cout << a << endl;

		a = "유재석"; // 새값 할당
		cout << a << endl;

		string b(a);// 초기값 있음
		cout << b << endl;

		string c("김수한무");// 초기값 있음
		cout << c << endl;
	}


	//내가 만든 MyString 객체 사용
	if (0)
	{
		string x; // -----------------------기본 생성자
		x.assign("홍길동");
		x.append("바보");
		//x.clear();
		cout << x << endl;

		string y("유재석"); // -----------------------변환 생성자
		cout << y << endl;
		
		string z(y);// ----------------------복사 생성자
		cout << z << endl;

		z = x;
		cout << z << endl;

			
		Mystring a; // -----------------------기본 생성자
		a.SetString("김상재");
		//cout << a << endl; // error
		cout << a.Getstring() << endl;

		Mystring b("박명수"); // --------------------변환 생성자
		cout <<  b.Getstring() << endl;
		b.SetString("하하");

		Mystring c(b);// ----------------------복사 생성자
		cout << c.Getstring() << endl;

		c = a;
		cout << c.Getstring() << endl;

		
	}	
	

	//정적 멤버(변수,함수)
	if (1)
	{
		cout << Mystring::m_nCount << endl;
		Mystring a;
		Mystring b;
		cout << a.m_nCount << endl;

		{
			Mystring c;
			cout << "안" << c.m_nCount << endl;
		}
		cout << b.m_nCount << endl;


	}
	return 0;
}

#endif