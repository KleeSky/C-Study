#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	cout << "ǰ�õ���:" << ++a << endl; // 11
	cout << "���õ���:" << a++ << endl; // 11

	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1 =" << a1 << endl;
	cout << "b1 =" << b1 << endl;

	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2 =" << a2 << endl;
	cout << "b2 =" << b2 << endl;

	system("pause");
	return 0;
}