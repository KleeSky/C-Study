#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;

void WindowControl();

BOOL WINAPI ConsoleHandler(DWORD signal) {
	if (signal == CTRL_CLOSE_EVENT || signal == CTRL_C_EVENT || signal == CTRL_LOGOFF_EVENT || signal == CTRL_SHUTDOWN_EVENT) {
		std::cout << "\n检测到程序被关闭，锁定账户喵~" << std::endl;
		system("rundll32.exe user32.dll,LockWorkStation");
		// 注意：锁屏后进程可能还没结束，可以做一些清理
		Sleep(3000); // 给点时间执行锁屏
		return TRUE; // 告诉系统事件被处理了
	}
	return FALSE;
}


int main()
{
	std::thread windowThread(WindowControl); // 创建并启动线程
	windowThread.detach(); // 分离线程，让它在后台运行

	// 注册控制处理函数
	if (!SetConsoleCtrlHandler(ConsoleHandler, TRUE)) {
		std::cerr << "设置控制处理函数失败喵~" << std::endl;
		return 1;
	}

	std::cout << "程序运行中，关闭窗口或按Ctrl+C都会触发锁屏喵~" << std::endl;

	// 用户登录验证

	// 定义用户名和密码
	string username = "KleeSky", password = "KleeSky,.4427";
	// 定义输入的用户名和密码
	string inputUsername, inputPassword;
	// 定义计数器
	int attempts = 0;

	
	// 提示用户输入用户名和密码
	do {
		// 如果已经输错了用户名或密码，提示用户重新输入
		if (attempts > 0)
		{
			cout << "用户名或密码错误，请重新输入。" << endl;
			system("pause"); // 暂停，等待用户按任意键继续
			system("cls"); // 清屏
		}

		cout << "请输入用户名：";
		cin >> inputUsername;
		cout << "请输入密码：";
		cin >> inputPassword;

		attempts++; // 增加尝试次数
	} while ((inputUsername != username || inputPassword != password) && attempts < 5);

	if (inputUsername == username && inputPassword == password) {
		cout << "登录成功！" << endl;
		system("pause"); // 暂停，等待用户按任意键继续
	} else {
		cout << "登录失败，超过最大尝试次数，请稍后再试。" << endl;
		cout << "将锁定账户，请联系管理员。" << endl;

		system("pause"); // 暂停，等待用户按任意键继续
		system("rundll32.exe user32.dll,LockWorkStation"); // 锁定账户
		return 1; // 退出程序
	}
	return 0;
}