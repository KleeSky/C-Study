#include <iostream>
using namespace std;

int main()
{
	//转义字符

	//换行符 \n
	cout << "Hellow World!\n";

	//反斜杠
	cout << "\\" << endl;

	//水平制表符 \t 作用是在输出时添加一个水平制表符的空格，用于对齐输出
	cout << "aaaa\tHellow World!" << endl;
	cout << "aa\tHellow World!" << endl;
	cout << "aaaaaa\tHellow World!" << endl;

	system("pause");
	return 0;
}