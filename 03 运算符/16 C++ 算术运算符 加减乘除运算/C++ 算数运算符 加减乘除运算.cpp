#include <iostream>
using namespace std;

int main()
{
	//加减运算符
	int a1 = 10;
	int b1 = 3;

	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	cout << "a1 + b1 = " << a1 + b1 << endl; //加法
	cout << "a1 - b1 = " << a1 - b1 << endl; //减法
	cout << "a1 * b1 = " << a1 * b1 << endl; //乘法
	cout << "a1 / b1 = " << a1 / b1 << endl; //除法,两个整数相除结果为整数

	int a2 = 10;
	int b2 = 20;

	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	cout << "a2 / b2 = " << a2 / b2 << endl; //除法,两个整数相除结果为整数

	int a3 = 10;
	int b3 = 0;

	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;
	
	//cout << "a3 / b3 = " << a3 / b3 << endl; //除法,两个整数相除结果为整数,除数为0会报错

	//浮点数相除

	double d1 = 0.5;
	double d2 = 0.22;
	
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;

	cout << "d1 / d2 = " << d1 / d2 << endl; //除法,两个浮点数相除结果为浮点数

	system("pause");
	return 0;
}