#include <iostream>
using namespace std;

int main()
{
	//��������
	int a = 0;
	cout << "������һ������: ";
	cin >> a;
	cout << "�������������: " << a << endl;

	system("pause");

	//����������
	double f = 0;
	cout << "������һ��������: ";
	cin >> f;
	cout << "������ĸ�������: " << f << endl;

	system("pause");

	//�ַ�������
	char ch = 0;
	cout << "������һ���ַ�: ";
	cin >> ch;
	cout << "��������ַ���: " << ch << endl;

	system("pause");

	//�ַ�������
	string str = "0";
	cout << "������һ���ַ���: ";
	cin >> str;
	cout << "��������ַ�����: " << str << endl;

	system("pause");

	//����������
	bool flag = false;
	cout << "������һ������ֵ(0��1): ";
	cin >> flag;
	cout << "������Ĳ���ֵ��: " << flag << endl;
	
	system("pause");
	return 0;
}