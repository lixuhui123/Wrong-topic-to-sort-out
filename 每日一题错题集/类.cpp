#include <string>
#include <iostream>
class Printer {
public:
	Printer(std::string name) { std::cout << name; }
};
class Container {
public:
	Container() : b("b"), a("a")
	{}/* ����ط����صĺ����ʼ���б�ĵ���˳��ȡ���ڶ������������  */
	Printer b;
	Printer a;
	
};
int mainfrgetyr() {
	Container c;
	system("pause");
	return 0;
}