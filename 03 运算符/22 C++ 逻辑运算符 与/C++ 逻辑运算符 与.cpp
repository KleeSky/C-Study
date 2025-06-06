#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 10;
	cout << (a && b) << endl;

	a += 10;
	cout << (a && b) << endl;

	b -= 10;
	cout << (a && b) << endl;

	system("pause");
	return 0;
}