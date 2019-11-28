#include <iostream>
using namespace std;
int maing3get3vred()
{
	int i = 0, a = 1, b = 2, c = 3;
	i = ++a || ++b || ++c;
	printf("%d %d %d %d", i, a, b, c);
	/* 1 2 2 3  短路求值，i 的值只有1或者0 脑子一时没有转过来 */
	cout << endl;
	cout << INT_MAX;
	system("pause"); 
	return 0;
}


/* 2. 以下系统中，int类型占几个字节，指针占几个字节，操作系统可以使用的最大内存空间是多大：
32位下：4,4,2^32 64位下：4,8,2^64

*/
/*  */