#include <iostream>
using namespace std;

// 计算 1 到 n 的累加和
int main()
{
	int i = 0, summation = 0; // 初始化 i 和 summation
	cout << "请输入一个整数：";

	// 检查输入是否成功
	if (!(cin >> i))
	{
		cout << "输入错误，请输入一个整数。" << endl;
		return 1; // 返回非零值表示错误
	}

	// 计算从 0 到 i 的整数和
	for (int num = 0; num <= i; num++)
	{
		summation += num;
	}

	// 输出结果
	cout << "从 0 到 " << i << " 的整数和为：" << summation << endl;

	system("pause");
	return 0;
}