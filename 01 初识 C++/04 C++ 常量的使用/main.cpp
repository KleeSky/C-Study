#include <iostream>
using namespace std;

//宏常量的定义: #define 宏常量名 宏常量值
#define Day 7 //问题:注意宏常量的定义没有分号

int main() //问题:函数定义没有分号
{
	cout << "一周有" << Day << "天" << endl;
	//修饰符常量的定义: const 数据类型 常量名 = 常量值
	const int Minth = 12;
	cout << "一年有" << Minth << "个月" << endl;
	system("pause");
	return 0;
}