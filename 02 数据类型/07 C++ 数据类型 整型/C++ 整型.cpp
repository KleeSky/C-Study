#include <iostream>
using namespace std;

int main()
{
	//����
	//1. ������ short 2�ֽ� ȡֵ��Χ -32768~32767
	short num1 = 10;
	//short num1 = 32768; // 32768����short�ķ�Χ

	//2. ���� int 4�ֽ� ȡֵ��Χ -2147483648~2147483647
	int num2 = 32768; // 32768��int��Χ��

	//3. ������ long 4�ֽ� ȡֵ��Χ -2147483648~2147483647
	long num3 = 10;

	//4. �������� long long 8�ֽ� ȡֵ��Χ -9223372036854775808~9223372036854775807
	long long num4 = 10;

	//���
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	cout << "num3:" << num3 << endl;
	cout << "num4:" << num4 << endl;
	system("pause");
	return 0;
}