#include <iostream>
using namespace std;
int maing3get3vred()
{
	int i = 0, a = 1, b = 2, c = 3;
	i = ++a || ++b || ++c;
	printf("%d %d %d %d", i, a, b, c);
	/* 1 2 2 3  ��·��ֵ��i ��ֵֻ��1����0 ����һʱû��ת���� */
	cout << endl;
	cout << INT_MAX;
	system("pause"); 
	return 0;
}


/* 2. ����ϵͳ�У�int����ռ�����ֽڣ�ָ��ռ�����ֽڣ�����ϵͳ����ʹ�õ�����ڴ�ռ��Ƕ��
32λ�£�4,4,2^32 64λ�£�4,8,2^64

*/
/*  */