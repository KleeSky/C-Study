#include <iostream>
using namespace std;

int main()
{
	//整型:短整型shrot,整型int,长整型long,长长整型long long
	//可以利用sizeof()函数来查看类型所占内存大小,注意不是统计现有变量所占内存总大小
	//语法:sizeof( 数据类型 / 变量名 )

	//数据类型
	cout << "shrot 类型所占内存大小为:" << sizeof(short) << "字节" << endl;
	cout << "int 类型所占内存大小为:" << sizeof(int) << "字节" << endl;
	cout << "long 类型所占内存大小为:" << sizeof(long) << "字节" << endl;
	cout << "long long 类型所占内存大小为:" << sizeof(long long) << "字节" << endl;
	
	//变量名
	short num1 = 10;
	cout << "num1 变量所占内存大小为:" << sizeof(num1) << "字节" << endl;
	//同理,可以查看其他变量所占内存大小
	//整型大小比较 short < int <= long <= long long

	system("pause");
	return 0;
}