#include <iostream>
using namespace std;
void maindweffcaeraf() {
	int x = 3, y = 3;
	switch (x % 2) {
	case 1:
		switch (y)
		{
		case 0:cout << "first";
		case 1:cout << "second"; break;
		default: cout << "hello";
		}
		//break;/* ��switch������һ���ӣ�û��break�ͻ�һֱ����ȥ */
	case 2:cout << "third";
	}
	system("pause");

}
