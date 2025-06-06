#include <iostream>
using namespace std;

int main()
{
	// 纵向循环
	for (int horizontal = 1; horizontal <= 10; horizontal++)
	{
		// 水平循环
		for (int vertical = 1; vertical <= 10; vertical++)
		{
			cout << horizontal * vertical << "\t";
		}
		cout << endl; // 换行
	}

	system("pause");
	return 0;
}