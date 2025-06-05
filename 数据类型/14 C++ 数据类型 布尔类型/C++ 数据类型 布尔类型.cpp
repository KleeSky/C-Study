#include <iostream>
using namespace std;

int main()
{
	//创建布尔类型变量
	bool flag = true; //布尔类型变量flag，初始值为true
	cout << "flag的值为：" << flag << endl; //输出flag的值

	system("pause"); //暂停程序，等待用户输入

	flag = false; //将flag的值改为false
	cout << "flag的值为：" << flag << endl; //输出flag的值

	//ture代表真，false代表假

	//查看布尔类型所占的内存空间
	cout << "bool 数据类型占用的内存大小是" << sizeof(bool) << "字节" << endl; //输出bool类型所占的内存大小

	system("pause");
	return 0;
}