#include <iostream>
using namespace std;

int main()
{
	double pigA, pigB, pigC;
	cout << "��������ֻ������أ��ÿո����,��A ��B ��C��: ";
	if (!(cin >> pigA >> pigB >> pigC)) {
		cout << "������Ч����ȷ������������֡�" << endl;
		return 1; // ���ش������
	}
	else if (pigA < 0 || pigB < 0 || pigC < 0) {
		cout << "���ز���Ϊ���������������롣" << endl;
		return 1; // ���ش������
	}

	// ʹ��max�������ҳ���������
	double maxWeight = max({ pigA,pigB,pigC });

	if (pigA == pigB && pigB == pigC) //�ų���ֻ��������ͬ�����
	{
		cout << "��ֻ���������ͬ������Ϊ: " << pigA << endl;
	}
	else
	{
		cout << "����������Ϊ��" << maxWeight;
		if (pigA == maxWeight) cout << "��A ";
		if (pigB == maxWeight) cout << "��B ";
		if (pigC == maxWeight) cout << "��C ";
		cout << "����Ϊ: " << maxWeight << endl;

	}
	system("pause");
	return 0;
}