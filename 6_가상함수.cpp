//#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

class Animal
{
public:
	////1. 일반 멤버함수(정적 바인딩)
	//void cry()
	//{
	//	cout << "운다" << endl;
	//}

	////2. 가상함수(동적 바인딩)
	//virtual void cry()
	//{
	//	cout << "운다" << endl;
	//}
	//3. 순수 가상함수(pure virtual)
	virtual void cry() = 0; // 인터페이스 상속
	
};
class Dog : public Animal
{
public:
	void cry()
	{
		cout << "멍멍" << endl;
	}
};
class Cat : public Animal
{
public:
	void cry()
	{
		cout << "야옹" << endl;
	}
};

int main()
{
	// Upcasting & downcasting
	if (0)
	{
		class Animal
		{
		public:
			string name;
			int age;
		};

		class Dog : public Animal
		{
		public:
			int color;
		};

		Dog dog;
		dog.name = "초코";
		dog.age = 7;
		dog.color = 10;

		Animal ani;
		ani.name = "냐옹이";
		
		//Dog* p;
	 //   p = &dog;// ok
		////p = &ani; // error

		//Animal* p2;
		//p2 = &dog; // ok
		//p2 = &ani; // ok


		/////////////////////////////
		//1. upcasting( 형상향)
		// : 원래 포인터는 다른 타입의 주소를 담을 수 없다
		// : 하지만, 부모 포인터는 자식의 주소를 담을 수 있다.(=upcasting)
		Animal* pAni = &dog;
		pAni->age = 7;

		 
		//2. downcasting( 형하향 )
		//Dog* pDog = pAni; //error
		Dog* pDog = (Dog*)pAni; // downcasting 은 "강제" 형변환해야 함
		pDog->age = 9;
		pDog->color = 20;


	}

	// 함수 오버라이드 + 가상함수(virtual)

	if (1)
	{
		//다형성
		Dog d;
		d.cry();

		Cat c;
		c.cry();

		
		//////////////
	
		Animal* p;
		p = &d;//upcasting
		p->cry();

		p = &c;//upcasting
		p->cry();

		//....////
		//Animal a; // error : 순수 가상클래스는 객체를 만들 수 없다.
	}
	return 0;
}

#endif