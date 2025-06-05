#include <iostream>
using namespace std;

int main()
{
	//字符型变量创建的方式
	//语法 char 数据名 = '字符'
	char ch = 'a';
	cout << ch << endl;

	//字符型变量所占的内存大小
	cout << "char 类型占用的内存大小为:" << sizeof(char) << "字节" << endl;
	
	//字符型变量常见的一些错误写法
	// char ch = "a"; //错误，不可以引用双引号
	// char ch = 'abcd'; //错误,不可以引用多个字符
	 
	// 字符型变量对应的ASCII码值
	cout << "字符:" << ch << "对应的ASCII码值为:" << (int)ch << endl;
	system("pause");
	return 0;
}