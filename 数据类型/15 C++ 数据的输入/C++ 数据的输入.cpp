#include <iostream>
using namespace std;

int main()
{
	//整型输入
	int a = 0;
	cout << "请输入一个整数: ";
	cin >> a;
	cout << "你输入的整数是: " << a << endl;

	system("pause");

	//浮点数输入
	double f = 0;
	cout << "请输入一个浮点数: ";
	cin >> f;
	cout << "你输入的浮点数是: " << f << endl;

	system("pause");

	//字符型输入
	char ch = 0;
	cout << "请输入一个字符: ";
	cin >> ch;
	cout << "你输入的字符是: " << ch << endl;

	system("pause");

	//字符串输入
	string str = "0";
	cout << "请输入一个字符串: ";
	cin >> str;
	cout << "你输入的字符串是: " << str << endl;

	system("pause");

	//布尔型输入
	bool flag = false;
	cout << "请输入一个布尔值(0或1): ";
	cin >> flag;
	cout << "你输入的布尔值是: " << flag << endl;
	
	system("pause");
	return 0;
}