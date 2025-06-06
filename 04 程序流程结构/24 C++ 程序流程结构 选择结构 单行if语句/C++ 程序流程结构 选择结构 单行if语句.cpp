#include <iostream>
using namespace std;

int main()
{
	double Score;

	cout << "请输入你的分数:";
	cin >> Score;

	if (!(cin >> Score))
	{
		cout << "输入无效，请输入一个数喵!" << endl;
		return 1;
	}

	if (Score <= 0 || Score >= 750)
	{
		cout << "你在玩我吗？" << endl;
		return 1;
	}
	else if (Score >= 600)
	{
		cout << "恭喜你，你通过了!" << endl;
	}
	else
	{
		cout << "你需要再努力一下!" << endl;
	}

	system("pause");
	return 0;
}