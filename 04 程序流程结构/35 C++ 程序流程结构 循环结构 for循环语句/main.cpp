#include <iostream>
using namespace std;

// ���� 1 �� n ���ۼӺ�
int main()
{
	int i = 0, summation = 0; // ��ʼ�� i �� summation
	cout << "������һ��������";

	// ��������Ƿ�ɹ�
	if (!(cin >> i))
	{
		cout << "�������������һ��������" << endl;
		return 1; // ���ط���ֵ��ʾ����
	}

	// ����� 0 �� i ��������
	for (int num = 0; num <= i; num++)
	{
		summation += num;
	}

	// ������
	cout << "�� 0 �� " << i << " ��������Ϊ��" << summation << endl;

	system("pause");
	return 0;
}