import random

# 設定遊戲的範圍
MIN_NUMBER = 1
MAX_NUMBER = 100

# 生成答案
answer = random.randint(MIN_NUMBER, MAX_NUMBER)
guess_count = 0

print("歡迎來到終極密碼遊戲！")
print(f"請猜一個介於 {MIN_NUMBER} 和 {MAX_NUMBER} 之間的數字。")

while True:
    try:
        # 讀取玩家的輸入
        guess = int(input("請輸入你的猜測: "))
        guess_count += 1

        # 檢查猜測是否在範圍內
        if guess < MIN_NUMBER or guess > MAX_NUMBER:
            print(f"請輸入 {MIN_NUMBER} 到 {MAX_NUMBER} 之間的數字！")
            continue

        # 判斷結果
        if guess < answer:
            print("太小了！往上猜！")
        elif guess > answer:
            print("太大了！往下猜！")
        else:
            print(f"\n恭喜你猜對了！答案就是 {answer}")
            print(f"你總共猜了 {guess_count} 次")
            break

    except ValueError:
        print("請輸入有效的數字！")