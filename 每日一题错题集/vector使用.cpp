#include <iostream>
#include <vector>
using namespace std;
int mainfdsdsa(void)
{
	vector<int>array;
	array.push_back(100);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(500);
	vector<int>::iterator itor;
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		if (*itor == 300)
		{
			itor = array.erase(itor);
			/* �˴��᷵��ԭ��ָ��ָ���λ�ã�vector��������ݻ�ǰ�ƣ��������Լ�����for��������� */
			//itor-=1;
		}
	}
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		cout << *itor << "";
	}
	system("pause");
	return 0;
}