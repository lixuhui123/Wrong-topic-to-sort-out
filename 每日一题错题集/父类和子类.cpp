//
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A() :m_iVal(0) 
//	{ 
//		test(); }
//	virtual void func() 
//	{ 
//		std::cout << m_iVal << ' '; }
//	void test()
//	{ 
//		func(); }
//public:
//	int m_iVal;
//};
//class B : public A
//{
//public:
//	B()
//	{ 
//		test(); }
//	virtual void func()
//	{
//		++m_iVal;
//		std::cout << m_iVal << ' ';
//	}
//};
//int mainljhgfdsxyuiogf(int argc, char* argv[])
//{
//	/* 派生类继承父类之后，在声明派生类的时候
//	会先调用基类的构造函数,并且在派生类未初始化之前无论是重写还是隐藏都不会生效*/
//	A *p = new B;
//	p->test();
//	/* 0,1,2 */
//	system("pause");
//	return 0;
//}
