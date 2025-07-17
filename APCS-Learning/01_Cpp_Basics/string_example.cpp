// string 基本操作
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << "字串長度: " << s.length() << endl;
    if (!s.empty())
    {
        cout << "第一個字: " << s[0] << endl;
    }
    return 0;
}
