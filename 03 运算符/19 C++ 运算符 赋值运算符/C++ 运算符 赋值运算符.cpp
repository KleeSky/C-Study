#include <iostream>
using namespace std;

int main()
{
	//赋值运算符

	// =
	int a = 10;
	a = 100; // 赋值运算符的基本用法
	cout << "a = " << a << endl; // 输出结果为100

	// +=
	a = 10;
	a += 2;
	cout << "a = " << a << endl; // 输出结果为12

	// -=
	a = 10;
	a -= 2;
	cout << "a = " << a << endl; // 输出结果为8

	// *=
	a = 10;
	a *= 2;
	cout << "a = " << a << endl; // 输出结果为20

	// /=
	a = 10;
	a /= 2;
	cout << "a = " << a << endl; // 输出结果为5

	// %=
	a = 10;
	a %= 3;
	cout << "a = " << a << endl; // 输出结果为1
	system("pause");
	return 0;
}