// ZeroJudge a004: 文文的求婚
// 題目描述：輸入一個整數 n，輸出 1+2+...+n 的總和。
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        sum += i;
    cout << sum << endl;
    return 0;
}