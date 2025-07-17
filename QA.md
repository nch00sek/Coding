# Q and A

## Cin 和 >> 到底是啥意思？ ✅

在 C++ 中，`cin` 是標準輸入物件（standard input），用來從鍵盤讀取資料。  
`>>` 是「輸入運算子」，用來把輸入的資料存到變數裡。

例如：
```cpp
int x;
cin >> x; // 從鍵盤讀取一個整數，存到 x 裡
```

## using namespace std; 是啥

在 C++ 裡，`std` 是標準函式庫（standard library）的命名空間。  
`using namespace std;` 這行的意思是：讓你不用每次都寫 `std::`，可以直接用像 `cout`、`cin` 這些名稱。

例如：
```cpp
using namespace std;
cout << "Hello"; // 不用寫 std::cout
```


## 為何要設計 namespace

在大型程式或多人協作時，可能會有很多不同的人寫的函式、變數名稱一樣。  
為了避免「名稱衝突」，C++ 提供了 namespace（命名空間）這個機制。

有了 namespace，不同的人可以把自己的程式包在不同的命名空間裡，  
就算名稱一樣，也不會互相干擾。

例如：
```cpp
namespace A {
    int x = 10;
}

namespace B {
    int x = 20;
}

cout << A::x << endl; // 輸出 10
cout << B::x << endl; // 輸出 20
```