// ZeroJudge a002: 簡易加法
// 題目描述：多組 a+b，直到 EOF，每組輸出一行 a+b。
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
    return 0;
}