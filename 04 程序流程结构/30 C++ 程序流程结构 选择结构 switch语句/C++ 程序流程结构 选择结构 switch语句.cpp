#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "请输入月份（1-12）: ";

	// 输入月份并判断是否有效
	if (!(cin >> month) || month < 1 || month > 12) {
		cout << "输入无效，请输入1到12之间的数字。" << endl;
		return 1; // 退出程序
	}

	switch (month)
	{
	case 1:case 2:case 3:
		cout << "春天" << endl;
		break;
	case 4:case 5:case 6:
		cout << "夏天" << endl;
		break;
	case 7:case 8:case 9:
		cout << "秋天" << endl;
		break;
	case 10:case 11:case 12:
		cout << "冬天" << endl;
		break;
	}

	system("pause");
	return 0;
}