#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "�������·ݣ�1-12��: ";

	// �����·ݲ��ж��Ƿ���Ч
	if (!(cin >> month) || month < 1 || month > 12) {
		cout << "������Ч��������1��12֮������֡�" << endl;
		return 1; // �˳�����
	}

	switch (month)
	{
	case 1:case 2:case 3:
		cout << "����" << endl;
		break;
	case 4:case 5:case 6:
		cout << "����" << endl;
		break;
	case 7:case 8:case 9:
		cout << "����" << endl;
		break;
	case 10:case 11:case 12:
		cout << "����" << endl;
		break;
	}

	system("pause");
	return 0;
}