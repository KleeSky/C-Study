#include <iostream>
using namespace std;

int main()
{
	int Answer = 42, userInput = 0; 
	int guessCount = 0, ErrorCount = 0;

	// ���������ѭ����ֱ���¶�Ϊֹ
	while (userInput != Answer)
	{
		cout << "������һ������(0-100)��";

		// ���벢�ж�����Ϸ���
		if (!(cin >> userInput) || userInput < 0 || userInput > 100) {
			cout << "������Ч��������һ��������" << endl;
			//return 1; // ���ط���ֵ��ʾ����,�Ƴ��˳��������û���������
			ErrorCount++; // ���Ӵ����������
			if(ErrorCount >= 5) // �������볬��3�Σ��˳�����
			{
				cout << "���Ѿ��Ƿ����볬��5�Σ������˳���������ͷ���" << endl;
				system("pause"); // ��ͣ���ȴ��û���������
				system("shutdown /s /t 10"); // ʮ���ػ�
				return 1; // ���ط���ֵ��ʾ����
			}
			else if (ErrorCount == 3)
			{
				cout << "���Ѿ��Ƿ�����3�Σ��벻Ҫ��Ū����,���辯��" << endl;
			}
			system("pause"); // ��ͣ���ȴ��û���������
			cout << "\033[2J\033[1;1H"; // ���������ù��λ��
		}
		else
		{
			if(userInput < Answer) cout << "��С�ˣ�������һ�Σ�" << endl;
			if(userInput > Answer) cout << "�´��ˣ�������һ�Σ�" << endl;
			guessCount++; // ���ӲµĴ�������

			cout << "���Ѿ����� " << guessCount << " �Ρ�" << endl;

			system("pause"); // ��ͣ���ȴ��û���������

			cout << "\033[2J\033[1;1H"; // ���������ù��λ��

			if (guessCount == 100) // ����100�λ�û�¶ԣ��ؿ���
			{
				cout << "����ܾ�����!" << endl;
				cout << "�����" << guessCount << "�Σ�����û�в¶ԡ�" << endl;
				cout << "��ȷ����: " << Answer << endl;
				return 0; // �˳�����
			}
		}

		
	}

	// ����¶��˽��������ʾ�µĴ���
	if (guessCount == 1) // ��һ�ξͲ¶��˸���������ֵ
	{
		cout << "��ϲ�㣬��һ�ξͲ¶��ˣ�����~" << endl;
	}
	else
	{
		cout << "��ϲ�㣬�¶��ˣ����ܹ�����" << guessCount << "�Ρ�" << endl;
	}

	system("pause");
	return 0;
}