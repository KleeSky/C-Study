#include <iostream>
using namespace std;

int main()
{
	//������ float
	float f1 = 3.14f; //ע�����f����ʾ������
	cout << "f1 = " << f1 << endl;
	float f2 = 3.1415926; //Ĭ��Ϊ˫����,���ǲ���f����ͻ��float�ķ�Χ
	cout << "f2 = " << f2 << endl; //�������3.14159�����Ȳ���

	//˫���� double
	double d1 = 3.1415926535; //����Ҫ��d��Ĭ�Ͼ���˫����
	cout << "d1 = " << d1 << endl;
	
	//Ĭ�������,cout����ĸ�������6λ��Ч����
	//д�ڶ������,ֻҪ�Ǳ���������,��û������

	cout << "�����ȸ����� float ��ռ���ڴ��С��:" << sizeof(float) << "�ֽ�" << endl; //4�ֽ�
	cout << "˫���ȸ����� double ��ռ���ڴ��С��:" << sizeof(double) << "�ֽ�" << endl; //8�ֽ�

	//��ѧ������
	float f3 = 3e2; //3*10^2 = 300
	cout << "f3 = " << f3 << endl;

	float f4 = 3e-2; //3*10^-2 = 0.03
	cout << "f4 = " << f4 << endl;
	
	system("pause");
	return 0;
}	