#include <iostream>
using namespace std;

int main()
{
	//�����������ͱ���
	bool flag = true; //�������ͱ���flag����ʼֵΪtrue
	cout << "flag��ֵΪ��" << flag << endl; //���flag��ֵ

	system("pause"); //��ͣ���򣬵ȴ��û�����

	flag = false; //��flag��ֵ��Ϊfalse
	cout << "flag��ֵΪ��" << flag << endl; //���flag��ֵ

	//ture�����棬false�����

	//�鿴����������ռ���ڴ�ռ�
	cout << "bool ��������ռ�õ��ڴ��С��" << sizeof(bool) << "�ֽ�" << endl; //���bool������ռ���ڴ��С

	system("pause");
	return 0;
}