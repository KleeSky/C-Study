#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;

void WindowControl();

BOOL WINAPI ConsoleHandler(DWORD signal) {
	if (signal == CTRL_CLOSE_EVENT || signal == CTRL_C_EVENT || signal == CTRL_LOGOFF_EVENT || signal == CTRL_SHUTDOWN_EVENT) {
		std::cout << "\n��⵽���򱻹رգ������˻���~" << std::endl;
		system("rundll32.exe user32.dll,LockWorkStation");
		// ע�⣺��������̿��ܻ�û������������һЩ����
		Sleep(3000); // ����ʱ��ִ������
		return TRUE; // ����ϵͳ�¼���������
	}
	return FALSE;
}


int main()
{
	std::thread windowThread(WindowControl); // �����������߳�
	windowThread.detach(); // �����̣߳������ں�̨����

	// ע����ƴ�����
	if (!SetConsoleCtrlHandler(ConsoleHandler, TRUE)) {
		std::cerr << "���ÿ��ƴ�����ʧ����~" << std::endl;
		return 1;
	}

	std::cout << "���������У��رմ��ڻ�Ctrl+C���ᴥ��������~" << std::endl;

	// �û���¼��֤

	// �����û���������
	string username = "KleeSky", password = "KleeSky,.4427";
	// ����������û���������
	string inputUsername, inputPassword;
	// ���������
	int attempts = 0;

	
	// ��ʾ�û������û���������
	do {
		// ����Ѿ�������û��������룬��ʾ�û���������
		if (attempts > 0)
		{
			cout << "�û���������������������롣" << endl;
			system("pause"); // ��ͣ���ȴ��û������������
			system("cls"); // ����
		}

		cout << "�������û�����";
		cin >> inputUsername;
		cout << "���������룺";
		cin >> inputPassword;

		attempts++; // ���ӳ��Դ���
	} while ((inputUsername != username || inputPassword != password) && attempts < 5);

	if (inputUsername == username && inputPassword == password) {
		cout << "��¼�ɹ���" << endl;
		system("pause"); // ��ͣ���ȴ��û������������
	} else {
		cout << "��¼ʧ�ܣ���������Դ��������Ժ����ԡ�" << endl;
		cout << "�������˻�������ϵ����Ա��" << endl;

		system("pause"); // ��ͣ���ȴ��û������������
		system("rundll32.exe user32.dll,LockWorkStation"); // �����˻�
		return 1; // �˳�����
	}
	return 0;
}