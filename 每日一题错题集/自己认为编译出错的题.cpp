//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void func(int val = 1)/* 在多态当中缺省的参数不会被重写调用的参数还是基类的 */
//	{
//		std::cout << "A->" << val << std::endl;
//	}
//	virtual void test()
//	{
//		func();
//	}
//};
//class B : public A
//{
//
//public:
//	void func(int val = 0)
//	{
//		std::cout << "B->" << val << std::endl;
//	}
//};
//int mainsdfghjkjgeerty(int argc, char* argv[])
//{
//	B*p = new B;
//	/* 公有继承可继承可访问，对象可以直接访问基类的公有成员
//	B->1*/
//	p->test();
//	system("pause");
//	return 0;
//}
///* 库函数可以跨平台，系统函数不能跨平台
//强转运算符可以重载，前缀
//后缀 () ->
//后置++有一个缺省参数*/
//
///* 代码生成阶段的主要任务是：C
//A 把高级语言翻译成机器语言
//B 把高级语言翻译成汇编语言
//C 把中间代码变换成依赖具体机器的目标代码
//D 把汇编语言翻译成机器语言 */
///* STL中的一级容器有:D
//A vector, deque, list, set, multiset, map, multimap.
//B 序列容器，关联容器，容器适配器
//C set, multiset, map, multimap.
//D vector, deque, list.
// */
///*  */