#include <iostream>
using namespace std;

int main()
{
	//C���Է���ַ���
	// �﷨��char ������[] = "�ַ�������";
	char str1[] = "Hello World!"; // �ַ�������
	cout << "str1: " << str1 << endl; // ����ַ���
	cout << "str1 ��ռ�ÿռ��С��" << sizeof(str1) << endl; // ����ַ���ռ�ÿռ��С

	//C++����ַ���
	// �﷨��string ������ = "�ַ�������";
	string str2 = "Hello World!"; // �ַ�������
	cout << "str2: " << str2 << endl; // ����ַ���
	cout << "str2 ��ռ�ÿռ��С��" << sizeof(str2) << endl; // ����ַ���ռ�ÿռ��С

	system("pause");
	return 0;
}