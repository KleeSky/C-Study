#include <iostream>
using namespace std;

int main()
{
	//����:������shrot,����int,������long,��������long long
	//��������sizeof()�������鿴������ռ�ڴ��С,ע�ⲻ��ͳ�����б�����ռ�ڴ��ܴ�С
	//�﷨:sizeof( �������� / ������ )

	//��������
	cout << "shrot ������ռ�ڴ��СΪ:" << sizeof(short) << "�ֽ�" << endl;
	cout << "int ������ռ�ڴ��СΪ:" << sizeof(int) << "�ֽ�" << endl;
	cout << "long ������ռ�ڴ��СΪ:" << sizeof(long) << "�ֽ�" << endl;
	cout << "long long ������ռ�ڴ��СΪ:" << sizeof(long long) << "�ֽ�" << endl;
	
	//������
	short num1 = 10;
	cout << "num1 ������ռ�ڴ��СΪ:" << sizeof(num1) << "�ֽ�" << endl;
	//ͬ��,���Բ鿴����������ռ�ڴ��С
	//���ʹ�С�Ƚ� short < int <= long <= long long

	system("pause");
	return 0;
}