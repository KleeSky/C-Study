#include <iostream>
using namespace std;

int main()
{
	//ȡģ����
	int a1 = 10, b1 = 3;

	cout << "a1 / b1 ȡ�� = " << a1 % b1 << endl; // ������ 

	int a2 = 10, b2 = 20;

	cout << "a2 / b2 ȡ�� = " << a2 % b2 << endl; // ������

	int a3 = 10, b3 = 0;

	//cout << "a3 / b3 ȡ�� = " << a3 % b3 << endl; // ������, 0������Ϊ����
	
	//����������֮���ǲ���ֱ��ȡģ��
	double a4 = 10.0, b4 = 3.0;
	//cout << "a4 / b4 ȡ�� = " << a4 % b4 << endl; // ������, ����������ֱ��ȡģ
	system("pause");
	return 0;
} 