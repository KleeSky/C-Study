#include <iostream>
using namespace std;

/*
	�����ӣ�
	ǰ�� ��1��ʼ��������100
	�ж� �����λ������7������ʮλ������7�����߸����ܱ�7����
	��� ���Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
*/
int main()
{
	for (int num = 1; num <= 100; num++)
	{
		if (num % 10 == 7 || num / 10 % 10 == 7 || num % 7 == 0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}

	system("pause");
	return 0;
}