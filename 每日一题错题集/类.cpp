#include <string>
#include <iostream>
class Printer {
public:
	Printer(std::string name) { std::cout << name; }
};
class Container {
public:
	Container() : b("b"), a("a")
	{}/* 这个地方隐藏的很深，初始化列表的调用顺序取决于对象的声明次序  */
	Printer b;
	Printer a;
	
};
int mainfrgetyr() {
	Container c;
	system("pause");
	return 0;
}