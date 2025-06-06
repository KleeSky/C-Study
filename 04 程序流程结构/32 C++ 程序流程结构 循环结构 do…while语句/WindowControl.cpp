#include <iostream>
#include <windows.h>
#include <thread>
using namespace std;

void WindowControl()
{
	while (true)
	{
		HWND hwnd = GetConsoleWindow(); // 获取控制台窗口句柄

		// 置顶窗口（HWND_TOPMOST = -1）
		SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0,
			SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);

		// 强制最大化控制台窗口
		ShowWindow(hwnd, SW_MAXIMIZE);

		this_thread::sleep_for(chrono::milliseconds(100)); // 每500毫秒执行一次
	}
}