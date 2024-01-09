// pure virtual fun.cpp.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"
#include"iostream"
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=10;
		y=20;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
	virtual void fun()=0;
	virtual void fun2()=0;
};

	class B:public A
	{
	public:
		void fun()
		{
	cout<<"fun"<<endl;
		}
};
	class C:public B
	{
	public:
		void fun2()
		{
	cout<<"fun2"<<endl;
		}
};
int main()
{
	C obj1;
	obj1.display();
	obj1.fun();
	obj1.fun2();
}