#include <iostream>
using namespace std;

int main()
{
	//�ַ��ͱ��������ķ�ʽ
	//�﷨ char ������ = '�ַ�'
	char ch = 'a';
	cout << ch << endl;

	//�ַ��ͱ�����ռ���ڴ��С
	cout << "char ����ռ�õ��ڴ��СΪ:" << sizeof(char) << "�ֽ�" << endl;
	
	//�ַ��ͱ���������һЩ����д��
	// char ch = "a"; //���󣬲���������˫����
	// char ch = 'abcd'; //����,���������ö���ַ�
	 
	// �ַ��ͱ�����Ӧ��ASCII��ֵ
	cout << "�ַ�:" << ch << "��Ӧ��ASCII��ֵΪ:" << (int)ch << endl;
	system("pause");
	return 0;
}