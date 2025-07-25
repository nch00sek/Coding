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

# 為什麼 C++ 程式需要 `int main()`？

在 C++ 中，`int main()` 是每個可執行程式的 **入口點（entry point）**，也是程式從哪裡開始執行的地方。這份說明將簡要解釋 `main` 函式的結構、用途與相關細節。

---

## 🧩 `main()` 是什麼？

```cpp
int main() {
    // 程式從這裡開始執行
    return 0;
}
```
# C++ 常見符號筆記

## ✅ 邏輯運算符（Logical Operators）

| 符號   | 名稱         | 解釋說明                                | 範例                           |
|--------|--------------|-----------------------------------------|--------------------------------|
| `!`    | 邏輯非（NOT） | 反轉布林值（true → false，false → true）| `!true` 為 `false`              |
| `&&`   | 邏輯與（AND） | 兩邊都為 true，結果才是 true            | `x > 0 && x < 10`               |
| `||`   | 邏輯或（OR）  | 只要有一邊是 true，結果就是 true         | `x < 0 || x > 100`              |

---

## ✅ 比較運算符（Comparison Operators）

| 符號   | 名稱           | 解釋說明                     | 範例               |
|--------|----------------|------------------------------|--------------------|
| `==`   | 等於            | 判斷兩個值是否相等            | `a == b`           |
| `!=`   | 不等於          | 判斷兩個值是否不相等          | `a != b`           |
| `>`    | 大於            | 左邊是否大於右邊              | `a > b`            |
| `<`    | 小於            | 左邊是否小於右邊              | `a < b`            |
| `>=`   | 大於等於        | 左邊是否大於或等於右邊        | `a >= b`           |
| `<=`   | 小於等於        | 左邊是否小於或等於右邊        | `a <= b`           |

---

## ✅ 算術運算符（Arithmetic Operators）

| 符號   | 名稱       | 解釋說明                        | 範例           |
|--------|------------|---------------------------------|----------------|
| `+`    | 加         | 數值相加                        | `a + b`        |
| `-`    | 減         | 數值相減                        | `a - b`        |
| `*`    | 乘         | 數值相乘                        | `a * b`        |
| `/`    | 除         | 數值相除                        | `a / b`        |
| `%`    | 取餘數（mod）| 取得整數除法的餘數              | `7 % 3` 得到 `1` |

---

## ✅ 指派運算符（Assignment Operators）

| 符號    | 名稱          | 解釋說明                          | 範例            |
|---------|---------------|-----------------------------------|-----------------|
| `=`     | 指派（賦值）   | 將右邊的值存入左邊的變數          | `a = 10`        |
| `+=`    | 加後指派       | 等於 `a = a + b`                  | `a += 2`        |
| `-=`    | 減後指派       | 等於 `a = a - b`                  | `a -= 3`        |
| `*=`    | 乘後指派       | 等於 `a = a * b`                  | `a *= 4`        |
| `/=`    | 除後指派       | 等於 `a = a / b`                  | `a /= 5`        |
| `%=`    | 餘數後指派     | 等於 `a = a % b`                  | `a %= 2`        |

---

## ✅ 其他常見符號

| 符號     | 說明                             | 範例             |
|----------|----------------------------------|------------------|
| `;`      | 每行 C++ 指令結尾必須加分號       | `int x = 5;`     |
| `//`     | 單行註解                          | `// 這是註解`    |
| `/* */`  | 多行註解                          | `/* 多行註解 */` |
| `"`      | 字串用雙引號                     | `"Hello"`        |
| `\n`     | 換行符號（newline）               | `cout << "Hi\n";`|
| `{}`     | 大括號，用來包住程式區塊         | `if (...) { ... }`|、

# 🔁 C++ `for` 迴圈教學筆記

## 📌 基本語法

```cpp
for (初始化; 條件判斷; 更新) {
    // 執行的程式區塊
}
