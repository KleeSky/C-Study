#include <iostream>
using namespace std;

int main()
{
	//整型
	//1. 短整型 short 2字节 取值范围 -32768~32767
	short num1 = 10;
	//short num1 = 32768; // 32768超出short的范围

	//2. 整型 int 4字节 取值范围 -2147483648~2147483647
	int num2 = 32768; // 32768在int范围内

	//3. 长整型 long 4字节 取值范围 -2147483648~2147483647
	long num3 = 10;

	//4. 长长整型 long long 8字节 取值范围 -9223372036854775808~9223372036854775807
	long long num4 = 10;

	//输出
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	cout << "num3:" << num3 << endl;
	cout << "num4:" << num4 << endl;
	system("pause");
	return 0;
}