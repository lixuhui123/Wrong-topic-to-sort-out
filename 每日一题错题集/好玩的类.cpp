//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	void foo()
//	{
//		printf("1");
//	}
//	virtual void fun()
//	{
//		printf("2");
//	}
//};
//class B : public A
//{
//public:
//	void foo()
//	{
//		printf("3");
//	}
//	void fun()
//	{
//		printf("4");
//	}
//};
//int maingtwewqg4w(void)
//{
//	A a;
//	B b;
//	A *p = &a;
//	p->foo();//1
//	p->fun();//2
//	p = &b;
//	p->foo();//1
//	p->fun();//4
//	A *ptr = (A *)&b;
//	ptr->foo();//1
//	ptr->fun();//4
//	/* 在这里再次注意一点，当派生类取地址给基类的时候，隐藏关系，是谁的调谁的
//	重写虚函数调用重写后的虚函数。*/
//	return 0;
//}
