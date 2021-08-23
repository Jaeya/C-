//#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

class Animal
{
public:
	////1. �Ϲ� ����Լ�(���� ���ε�)
	//void cry()
	//{
	//	cout << "���" << endl;
	//}

	////2. �����Լ�(���� ���ε�)
	//virtual void cry()
	//{
	//	cout << "���" << endl;
	//}
	//3. ���� �����Լ�(pure virtual)
	virtual void cry() = 0; // �������̽� ���
	
};
class Dog : public Animal
{
public:
	void cry()
	{
		cout << "�۸�" << endl;
	}
};
class Cat : public Animal
{
public:
	void cry()
	{
		cout << "�߿�" << endl;
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
		dog.name = "����";
		dog.age = 7;
		dog.color = 10;

		Animal ani;
		ani.name = "�Ŀ���";
		
		//Dog* p;
	 //   p = &dog;// ok
		////p = &ani; // error

		//Animal* p2;
		//p2 = &dog; // ok
		//p2 = &ani; // ok


		/////////////////////////////
		//1. upcasting( ������)
		// : ���� �����ʹ� �ٸ� Ÿ���� �ּҸ� ���� �� ����
		// : ������, �θ� �����ʹ� �ڽ��� �ּҸ� ���� �� �ִ�.(=upcasting)
		Animal* pAni = &dog;
		pAni->age = 7;

		 
		//2. downcasting( ������ )
		//Dog* pDog = pAni; //error
		Dog* pDog = (Dog*)pAni; // downcasting �� "����" ����ȯ�ؾ� ��
		pDog->age = 9;
		pDog->color = 20;


	}

	// �Լ� �������̵� + �����Լ�(virtual)

	if (1)
	{
		//������
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
		//Animal a; // error : ���� ����Ŭ������ ��ü�� ���� �� ����.
	}
	return 0;
}

#endif