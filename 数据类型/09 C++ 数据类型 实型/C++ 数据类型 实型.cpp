#include <iostream>
using namespace std;

int main()
{
	//单精度 float
	float f1 = 3.14f; //注意加上f，表示单精度
	cout << "f1 = " << f1 << endl;
	float f2 = 3.1415926; //默认为双精度,但是不加f不能突破float的范围
	cout << "f2 = " << f2 << endl; //输出会是3.14159，精度不够

	//双精度 double
	double d1 = 3.1415926535; //不需要加d，默认就是双精度
	cout << "d1 = " << d1 << endl;
	
	//默认情况下,cout输出的浮点数是6位有效数字
	//写在多的数字,只要是被用来看的,都没有意义

	cout << "单精度浮点数 float 所占的内存大小是:" << sizeof(float) << "字节" << endl; //4字节
	cout << "双精度浮点数 double 所占的内存大小是:" << sizeof(double) << "字节" << endl; //8字节

	//科学计数法
	float f3 = 3e2; //3*10^2 = 300
	cout << "f3 = " << f3 << endl;

	float f4 = 3e-2; //3*10^-2 = 0.03
	cout << "f4 = " << f4 << endl;
	
	system("pause");
	return 0;
}	