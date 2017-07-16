// 多态.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
public:
	void foo()
	{
		printf("1\n");
	
	}

	virtual void fun()   //虚函数
	{
		printf("2\n");

	}

};


class	B : public A
{
public:
	void foo()
	{
		printf("3\n");
	}

	void fun()        //成员函数重写，多态
	{
		printf("4\n");
	
	}


};

class Base
{
public:
	virtual void f(float x)
	{
		cout << "Base::f(float)" << x << endl;
	}
	void g(float x)
	{
		cout << "Base::g(float)" << x << endl;
	}
	void h(float x)
	{
		cout << "Base::h(float)" << x << endl;
	}
};
class Derived : public Base
{
public:
	virtual void f(float x)
	{
		cout << "Derived::f(float)" << x << endl;   //多态、覆盖  
	}
	void g(int x)
	{
		cout << "Derived::g(int)" << x << endl;     //隐藏  
	}
	void h(float x)
	{
		cout << "Derived::h(float)" << x << endl;   //隐藏  
	}
};


int main()
{

	Derived d;
	Base b;
	Base *pb = &d;
	Derived *pc = (Derived*) &b;
	Derived *pd = &d;
	// Good : behavior depends solely on type of the object  
	pb->f(3.14f);   // Derived::f(float) 3.14  
	pd->f(3.14f);   // Derived::f(float) 3.14  
	pc->f(3.14f);

					// Bad : behavior depends on type of the pointer  
	pb->g(3.14f);   // Base::g(float)  3.14  
	pd->g(3.14f);   // Derived::g(int) 3   

					// Bad : behavior depends on type of the pointer  
	pb->h(3.14f);   // Base::h(float) 3.14  
	pd->h(3.14f);   // Derived::h(float) 3.14  
	return 0;
}

