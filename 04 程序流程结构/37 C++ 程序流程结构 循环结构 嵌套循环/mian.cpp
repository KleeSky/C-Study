#include <iostream>
using namespace std;

int main()
{
	// ����ѭ��
	for (int horizontal = 1; horizontal <= 10; horizontal++)
	{
		// ˮƽѭ��
		for (int vertical = 1; vertical <= 10; vertical++)
		{
			cout << horizontal * vertical << "\t";
		}
		cout << endl; // ����
	}

	system("pause");
	return 0;
}