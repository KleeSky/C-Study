#include <iostream>
using namespace std;

int main()
{
	//��ֵ�����

	// =
	int a = 10;
	a = 100; // ��ֵ������Ļ����÷�
	cout << "a = " << a << endl; // ������Ϊ100

	// +=
	a = 10;
	a += 2;
	cout << "a = " << a << endl; // ������Ϊ12

	// -=
	a = 10;
	a -= 2;
	cout << "a = " << a << endl; // ������Ϊ8

	// *=
	a = 10;
	a *= 2;
	cout << "a = " << a << endl; // ������Ϊ20

	// /=
	a = 10;
	a /= 2;
	cout << "a = " << a << endl; // ������Ϊ5

	// %=
	a = 10;
	a %= 3;
	cout << "a = " << a << endl; // ������Ϊ1
	system("pause");
	return 0;
}