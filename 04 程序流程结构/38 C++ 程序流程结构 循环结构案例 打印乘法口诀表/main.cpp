#include <iostream>
using namespace std;

int main()
{
    // 外层循环：控制乘法表的行数，从9开始递减到1
    for (int Vertical = 9; Vertical >= 1; Vertical--)
    {
        // 内层循环：控制每行打印的乘法表达式，从当前的Vertical值到9
        for (int Horizontal = Vertical; Horizontal <= 9; Horizontal++)
        {
            // 输出当前乘法表达式，比如 9*9=81 ，后面加一个制表符\t用于对齐
            cout << Vertical << "*" << Horizontal << "=" << Vertical * Horizontal << "\t";
        }
        // 每打印完一行的乘法表达式后换行
        cout << endl;
    }

    // Windows系统下暂停程序，方便查看输出结果
    system("pause");

    return 0;
}
