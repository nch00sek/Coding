// ZeroJudge a006: 一元二次方程式
// 題目描述：輸入 a, b, c，輸出 ax^2+bx+c=0 的兩個根（保證有整數根）。
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int delta = b * b - 4 * a * c;
    int r1 = (-b + sqrt(delta)) / (2 * a);
    int r2 = (-b - sqrt(delta)) / (2 * a);
    if (r1 > r2)
        swap(r1, r2);
    cout << r1 << " " << r2 << endl;
    return 0;
}