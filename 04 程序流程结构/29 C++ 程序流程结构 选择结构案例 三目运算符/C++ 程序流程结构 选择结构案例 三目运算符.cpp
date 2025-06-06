#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 20, c = 0;
	c = (a > b ? a : b;) // 三目运算符，判断a是否大于b，如果是，则c等于a，否则c等于b
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl; // 输出结果

	system("pause");
	return 0;
}