// ZeroJudge a003: 兩光占卜師的算式
// 題目描述：輸入兩個整數 a、b，若 a+b 為偶數輸出 Even，否則輸出 Odd。
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}