#include <iostream>
using namespace std;

int main()
{
	//�Ӽ������
	int a1 = 10;
	int b1 = 3;

	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	cout << "a1 + b1 = " << a1 + b1 << endl; //�ӷ�
	cout << "a1 - b1 = " << a1 - b1 << endl; //����
	cout << "a1 * b1 = " << a1 * b1 << endl; //�˷�
	cout << "a1 / b1 = " << a1 / b1 << endl; //����,��������������Ϊ����

	int a2 = 10;
	int b2 = 20;

	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	cout << "a2 / b2 = " << a2 / b2 << endl; //����,��������������Ϊ����

	int a3 = 10;
	int b3 = 0;

	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;
	
	//cout << "a3 / b3 = " << a3 / b3 << endl; //����,��������������Ϊ����,����Ϊ0�ᱨ��

	//���������

	double d1 = 0.5;
	double d2 = 0.22;
	
	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;

	cout << "d1 / d2 = " << d1 / d2 << endl; //����,����������������Ϊ������

	system("pause");
	return 0;
}