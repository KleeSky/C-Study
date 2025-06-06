#include <iostream>
using namespace std;

int main()
{
	int Answer = 42, userInput = 0; 
	int guessCount = 0, ErrorCount = 0;

	// 进入猜数字循环，直到猜对为止
	while (userInput != Answer)
	{
		cout << "请输入一个整数(0-100)：";

		// 输入并判断输入合法性
		if (!(cin >> userInput) || userInput < 0 || userInput > 100) {
			cout << "输入无效，请输入一个整数。" << endl;
			//return 1; // 返回非零值表示错误,移除退出程序让用户重新输入
			ErrorCount++; // 增加错误输入计数
			if(ErrorCount >= 5) // 错误输入超过3次，退出程序
			{
				cout << "你已经非法输入超过5次，程序将退出，并给予惩罚。" << endl;
				system("pause"); // 暂停，等待用户按键继续
				system("shutdown /s /t 10"); // 十秒后关机
				return 1; // 返回非零值表示错误
			}
			else if (ErrorCount == 3)
			{
				cout << "你已经非法输入3次，请不要玩弄程序,给予警告" << endl;
			}
			system("pause"); // 暂停，等待用户按键继续
			cout << "\033[2J\033[1;1H"; // 清屏，重置光标位置
		}
		else
		{
			if(userInput < Answer) cout << "猜小了，请再试一次：" << endl;
			if(userInput > Answer) cout << "猜大了，请再试一次：" << endl;
			guessCount++; // 增加猜的次数计数

			cout << "你已经猜了 " << guessCount << " 次。" << endl;

			system("pause"); // 暂停，等待用户按键继续

			cout << "\033[2J\033[1;1H"; // 清屏，重置光标位置

			if (guessCount == 100) // 猜了100次还没猜对，重开吧
			{
				cout << "世界拒绝了我!" << endl;
				cout << "你猜了" << guessCount << "次，还是没有猜对。" << endl;
				cout << "正确答案是: " << Answer << endl;
				return 0; // 退出程序
			}
		}

		
	}

	// 输出猜对了结果，并显示猜的次数
	if (guessCount == 1) // 第一次就猜对了给予情绪价值
	{
		cout << "恭喜你，第一次就猜对了！贴贴~" << endl;
	}
	else
	{
		cout << "恭喜你，猜对了！你总共猜了" << guessCount << "次。" << endl;
	}

	system("pause");
	return 0;
}