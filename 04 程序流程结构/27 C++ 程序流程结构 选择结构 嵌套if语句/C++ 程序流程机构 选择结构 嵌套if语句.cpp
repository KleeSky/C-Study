#include <iostream>
using namespace std;

int main()
{
	double Score = 0.0;
	cout << "��������ĸ߿��ɼ���";

	if (!(cin >> Score))
	{
		cout << "��������Ч������!" << endl;
		return 1;
	}
	else if (Score < 0 || Score > 750)
	{
		cout << "�����ֵ���ں���Χ�ڡ�" << endl;
		return 1;
	}

	if (Score >= 600)
	{
		if (Score >= 700)
			cout << "��ϲ�㣬�㱻�廪��ѧ¼ȡ�ˣ�" << endl;
		
		else if (Score >= 650)
			cout << "��ϲ�㣬�㱻������ѧ¼ȡ�ˣ�" << endl;
		
		else
			cout << "��ϲ�㣬�㱻������ѧ¼ȡ�ˣ�" << endl;
	}
	else if (Score >= 500)
		cout << "��ϲ�㣬�㱻������ѧ¼ȡ�ˣ�" << endl;

	else if (Score >= 400)
		cout << "��ϲ�㣬�㱻������ѧ¼ȡ�ˣ�" << endl;

	else if (Score >= 300)
		cout << "��ϲ�㣬�㱻��ר��ѧ¼ȡ�ˣ�" << endl;

	else
		cout << "�ܱ�Ǹ����û�б��κδ�ѧ¼ȡ��" << endl;

	system("pause");
	return 0;
}