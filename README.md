# Number Guessing Game

這是一個簡單但有趣的數字猜謎遊戲。玩家需要在有限的範圍內猜測一個隨機生成的數字，遊戲會提供提示，直到猜對為止。

## 功能特點

- 數字範圍：1-100
- 即時提示：告訴玩家猜測的數字是太高還是太低
- 計數功能：記錄玩家猜測的次數
- 輸入驗證：確保玩家輸入的是有效數字

## 如何運行

1. 確保你的電腦已安裝 Python
2. 運行遊戲：
   ```bash
   python main.py
   ```

## 遊戲規則

1. 遊戲開始時會隨機生成一個 1-100 之間的數字
2. 輸入你猜測的數字
3. 根據提示（太高或太低）繼續猜測
4. 猜對數字後，遊戲會顯示你總共猜了幾次

## 技術說明

- 使用 Python 的 random 模組生成隨機數字
- 使用異常處理確保輸入的有效性
- 使用 while 循環持續接收玩家輸入直到猜對

## 遊戲截圖

```
Welcome to the Ultimate Number Guessing Game!
Please guess a number between 1 and 100.
Enter your guess: 50
Too high! Guess lower!
Enter your guess: 25
Too low! Guess higher!
Enter your guess: 37
Congratulations! The answer is 37
You made 3 guesses in total
```
