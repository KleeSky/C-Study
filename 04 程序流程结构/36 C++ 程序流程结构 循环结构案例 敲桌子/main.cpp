#include <iostream>
using namespace std;

/*
	敲桌子：
	前景 从1开始数到数字100
	判断 如果个位数含有7，或者十位数含有7，或者该数能被7整除
	结果 我们打印敲桌子，其余数字直接打印输出。
*/
int main()
{
	for (int num = 1; num <= 100; num++)
	{
		if (num % 10 == 7 || num / 10 % 10 == 7 || num % 7 == 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");
	return 0;
}