// #include "stdafx.h"
#include<iostream>
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
		cout<<"A const"<<endl;
	
}
A(int a,int b)
{
	cout<<"A 2 const"<<endl;
		x=a;
		y=b;
}
A(int a)
{
	cout<<"A 1 const"<<endl;
	x=a;
	y=a;
}
void display()
{
	cout<<"x="<<x<<"y="<<y<<endl;
	cout<<"display fun"<<endl;
}
~A()
{
	cout<<"destructor"<<endl;
}
};

int main()
{
	A obj1;
	A obj2(10);
	A obj3(11,22);
	obj1.display();
	obj2.display();
	obj3.display();
}