#include <iostream>
using namespace std;
int main()
{
    int M, D;
    cin >> M >> D;
    
    int S = (M * 2 + D) % 3;
    if (S == 0)
    cout << "普通\n";
    if (S == 1)
    cout << "吉\n";
    if (S == 2)
    cout << "大吉\n";
    return 0;
}
