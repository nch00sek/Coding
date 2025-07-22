// ZeroJudge a005: Eva 的回家作業
// 題目描述：輸入三個整數，輸出其中最大值。
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b, c)) << endl;
    return 0;
}