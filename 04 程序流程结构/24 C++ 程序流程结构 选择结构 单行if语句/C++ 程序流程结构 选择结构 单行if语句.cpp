#include <iostream>
using namespace std;

int main()
{
	double Score;

	cout << "��������ķ���:";
	cin >> Score;

	if (!(cin >> Score))
	{
		cout << "������Ч��������һ������!" << endl;
		return 1;
	}

	if (Score <= 0 || Score >= 750)
	{
		cout << "����������" << endl;
		return 1;
	}
	else if (Score >= 600)
	{
		cout << "��ϲ�㣬��ͨ����!" << endl;
	}
	else
	{
		cout << "����Ҫ��Ŭ��һ��!" << endl;
	}

	system("pause");
	return 0;
}