#include <iostream>
using namespace std;
void func(const int& v1, const int& v2)
{
	std::cout << v1 << ' ';
	std::cout << v2 << ' ';
}
int mainedwasdcqwa()
{
	int i = 0;
	func(++i, i++);
	system("pause");
	return 0;
}



