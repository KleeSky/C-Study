#include <iostream>
using namespace std;

int main()
{
    // ���ѭ�������Ƴ˷������������9��ʼ�ݼ���1
    for (int Vertical = 9; Vertical >= 1; Vertical--)
    {
        // �ڲ�ѭ��������ÿ�д�ӡ�ĳ˷����ʽ���ӵ�ǰ��Verticalֵ��9
        for (int Horizontal = Vertical; Horizontal <= 9; Horizontal++)
        {
            // �����ǰ�˷����ʽ������ 9*9=81 �������һ���Ʊ��\t���ڶ���
            cout << Vertical << "*" << Horizontal << "=" << Vertical * Horizontal << "\t";
        }
        // ÿ��ӡ��һ�еĳ˷����ʽ����
        cout << endl;
    }

    // Windowsϵͳ����ͣ���򣬷���鿴������
    system("pause");

    return 0;
}
