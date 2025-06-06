#include <iostream>
using namespace std;

int main()
{
	//C语言风格字符串
	// 语法：char 变量名[] = "字符串内容";
	char str1[] = "Hello World!"; // 字符串类型
	cout << "str1: " << str1 << endl; // 输出字符串
	cout << "str1 的占用空间大小：" << sizeof(str1) << endl; // 输出字符串占用空间大小

	//C++风格字符串
	// 语法：string 变量名 = "字符串内容";
	string str2 = "Hello World!"; // 字符串类型
	cout << "str2: " << str2 << endl; // 输出字符串
	cout << "str2 的占用空间大小：" << sizeof(str2) << endl; // 输出字符串占用空间大小

	system("pause");
	return 0;
}