#include <iostream>
using namespace std;

int main()
{
	double Score = 0.0;
	cout << "请输入你的高考成绩：";

	if (!(cin >> Score))
	{
		cout << "请输入有效数字喵!" << endl;
		return 1;
	}
	else if (Score < 0 || Score > 750)
	{
		cout << "输入的值不在合理范围内。" << endl;
		return 1;
	}

	if (Score >= 600)
	{
		if (Score >= 700)
			cout << "恭喜你，你被清华大学录取了！" << endl;
		
		else if (Score >= 650)
			cout << "恭喜你，你被北京大学录取了！" << endl;
		
		else
			cout << "恭喜你，你被复旦大学录取了！" << endl;
	}
	else if (Score >= 500)
		cout << "恭喜你，你被二本大学录取了！" << endl;

	else if (Score >= 400)
		cout << "恭喜你，你被三本大学录取了！" << endl;

	else if (Score >= 300)
		cout << "恭喜你，你被大专大学录取了！" << endl;

	else
		cout << "很抱歉，你没有被任何大学录取。" << endl;

	system("pause");
	return 0;
}