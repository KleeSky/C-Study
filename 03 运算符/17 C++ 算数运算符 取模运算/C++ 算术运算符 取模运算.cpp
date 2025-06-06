#include <iostream>
using namespace std;

int main()
{
	//取模运算
	int a1 = 10, b1 = 3;

	cout << "a1 / b1 取余 = " << a1 % b1 << endl; // 求余数 

	int a2 = 10, b2 = 20;

	cout << "a2 / b2 取余 = " << a2 % b2 << endl; // 求余数

	int a3 = 10, b3 = 0;

	//cout << "a3 / b3 取余 = " << a3 % b3 << endl; // 求余数, 0不能作为除数
	
	//两个浮点数之间是不能直接取模的
	double a4 = 10.0, b4 = 3.0;
	//cout << "a4 / b4 取余 = " << a4 % b4 << endl; // 求余数, 浮点数不能直接取模
	system("pause");
	return 0;
} 