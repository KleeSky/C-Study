#include <iostream>
using namespace std;

// 水仙花数
int main()
{
	// 定义变量
	int num = 100, Units, Tens, Hundreds;
	do
	{
		Units = num % 10; //个位数
		Tens = (num / 10) % 10; //十位数
		Hundreds = num / 100; //百位数

		// 判断是否为水仙花数
		if (num == (Units * Units * Units + Tens * Tens * Tens + Hundreds * Hundreds * Hundreds))
		{
			cout << num << "是水仙花数" << endl;
		}
	}
	while (num <= 999); //判断是小于1000

	system("pause");
	return 0;
}