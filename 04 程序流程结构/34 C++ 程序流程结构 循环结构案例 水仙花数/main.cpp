#include <iostream>
using namespace std;

// ˮ�ɻ���
int main()
{
	// �������
	int num = 100, Units, Tens, Hundreds;
	do
	{
		Units = num % 10; //��λ��
		Tens = (num / 10) % 10; //ʮλ��
		Hundreds = num / 100; //��λ��

		// �ж��Ƿ�Ϊˮ�ɻ���
		if (num == (Units * Units * Units + Tens * Tens * Tens + Hundreds * Hundreds * Hundreds))
		{
			cout << num << "��ˮ�ɻ���" << endl;
		}
	}
	while (num <= 999); //�ж���С��1000

	system("pause");
	return 0;
}