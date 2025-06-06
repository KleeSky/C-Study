#include <iostream>
using namespace std;

int main()
{
	double pigA, pigB, pigC;
	cout << "请输入三只猪的体重（用空格隔开,猪A 猪B 猪C）: ";
	if (!(cin >> pigA >> pigB >> pigC)) {
		cout << "输入无效，请确保输入的是数字。" << endl;
		return 1; // 返回错误代码
	}
	else if (pigA < 0 || pigB < 0 || pigC < 0) {
		cout << "体重不能为负数，请重新输入。" << endl;
		return 1; // 返回错误代码
	}

	// 使用max函数来找出最大的体重
	double maxWeight = max({ pigA,pigB,pigC });

	if (pigA == pigB && pigB == pigC) //排除三只猪体重相同的情况
	{
		cout << "三只猪的体重相同，体重为: " << pigA << endl;
	}
	else
	{
		cout << "体重最大的猪为：" << maxWeight;
		if (pigA == maxWeight) cout << "猪A ";
		if (pigB == maxWeight) cout << "猪B ";
		if (pigC == maxWeight) cout << "猪C ";
		cout << "体重为: " << maxWeight << endl;

	}
	system("pause");
	return 0;
}