#include <iostream>
using namespace std;

int main()
{
	// 1. 标识符不能是关键字
	//int int = 0; // 错误，int是关键字

	// 2. 标识符只能由字母、数字和下划线组成，不能以数字开头
	int a1 = 0; // 正确，合法标识符
	int _a = 0; // 正确，合法标识符
	int a_b = 0; // 正确，合法标识符
	//int a-b = 0; // 错误，包含非法字符'-'
	//int 1a = 0; // 错误，不能以数字开头

	// 3. 标识符区分大小写
	int A = 0;
	cout << "A: " << A << endl; // 输出A的值
	//cout << "a: " << a << endl; // 错误，a未定义

	//建议:给变量命名时，尽量使用有意义的名称，避免使用单个字母或无意义的名称
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << "Sum: " << sum << endl;

	system("pause");
	return 0;
}