//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	virtual void func(int val = 1)/* �ڶ�̬����ȱʡ�Ĳ������ᱻ��д���õĲ������ǻ���� */
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
//	/* ���м̳пɼ̳пɷ��ʣ��������ֱ�ӷ��ʻ���Ĺ��г�Ա
//	B->1*/
//	p->test();
//	system("pause");
//	return 0;
//}
///* �⺯�����Կ�ƽ̨��ϵͳ�������ܿ�ƽ̨
//ǿת������������أ�ǰ׺
//��׺ () ->
//����++��һ��ȱʡ����*/
//
///* �������ɽ׶ε���Ҫ�����ǣ�C
//A �Ѹ߼����Է���ɻ�������
//B �Ѹ߼����Է���ɻ������
//C ���м����任���������������Ŀ�����
//D �ѻ�����Է���ɻ������� */
///* STL�е�һ��������:D
//A vector, deque, list, set, multiset, map, multimap.
//B ������������������������������
//C set, multiset, map, multimap.
//D vector, deque, list.
// */
///*  */