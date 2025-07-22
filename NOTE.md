# Note

## getline(cin, s)

- 讀取輸入一整行，包括空格，直到遇到換行字元（Enter）。
- 常用於需要取得包含空白的完整輸入，例如讀取一句話或一行資料。
- 語法：`getline(istream, string)`，最常見用法是 `getline(cin, s)`，其中 `cin` 是標準輸入，`s` 是 string 變數。
- 讀取時不會包含換行字元本身，換行字元會被丟棄。
- 若前面有用過 `cin >>` 讀取資料，可能會因為緩衝區殘留換行字元導致 `getline` 直接讀到空行，可用 `cin.ignore()` 解決。

  例如：

  ```cpp
  int n;
  string s;
  cin >> n;           // 讀取一個整數，輸入 5\n
  getline(cin, s);    // 這裡 s 會變成空字串，因為上一行輸入後的換行符還在緩衝區
  cout << "s = '" << s << "'" << endl; // 輸出 s = ''

  // 正確做法：
  cin.ignore();       // 忽略掉殘留的換行符
  getline(cin, s);    // 這時才會正確讀到下一行輸入
  ```

- 也可用於檔案輸入，例如 `getline(file, s)` 讀取檔案中的一整行。

為啥要 int main
就是 main 是程式的進入點
所以會從 main 開始進下程式
所以 int main 就是程式從這裡開始執行 ywhhhh
