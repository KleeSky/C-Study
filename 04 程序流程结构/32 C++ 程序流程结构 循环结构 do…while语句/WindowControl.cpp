#include <iostream>
#include <windows.h>
#include <thread>
using namespace std;

void WindowControl()
{
	while (true)
	{
		HWND hwnd = GetConsoleWindow(); // ��ȡ����̨���ھ��

		// �ö����ڣ�HWND_TOPMOST = -1��
		SetWindowPos(hwnd, HWND_TOPMOST, 0, 0, 0, 0,
			SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);

		// ǿ����󻯿���̨����
		ShowWindow(hwnd, SW_MAXIMIZE);

		this_thread::sleep_for(chrono::milliseconds(100)); // ÿ500����ִ��һ��
	}
}