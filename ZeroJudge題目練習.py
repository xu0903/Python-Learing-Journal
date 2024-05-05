# Q53.計分系統(級距型)
# 答對題數在 0~10 者，每題給6分。
# 題數在 11~20 者，從第11題開始，每題給2分。(前10題還是每題給6分)
# 題數在 21~40 者，從第21題開始，每題給1分。
# 題數在 40 以上者，一律100分。
n = int(input())  # 答對題數
score = 0
if n < 0:
    print("Wrong")
elif 0 <= n <= 10:
    score += n*6
elif 11 <= n <= 20:
    score += 60
    score += (n-10)*2
elif 21 <= n <= 40:
    score += 80
    score += (n - 20) * 1
else:
    score += 100
print(score)
or:
        break


# Q42.平面圓形切割
while True:
    try:
        n = int(input())
        ans = n**2 - n + 2
        print(ans)
    except EOFError:
        break


# Q40.阿姆斯撞樹??????????????????



# Q34.二進位轉換???????


# Q24.最大公因數
a, b = map(int, input().split())

while a != 0 and b != 0:
    if a > b:
        a = a % b
    elif a < b:
        b = b % a
    else:
        print(a)
if a > b:
    print(a)
else:
    print(b)

# Q10.因式分解???????????????????

# Q9.解碼器
n = input()
k = ord("1") - ord("*")
plain = "" # 保存字串
for i in n:
    plain += chr(ord(i)-k)
print(plain)

# Q6. 一元二次
import math
a, b, c = map(int, input().split())
n = b**2 - 4 * a * c
rootA = (-b + n**0.5) / (2 * a)
rootB = (-b - n**0.5) / (2 * a)
int(rootA, rootB)
if n < 0:
    print("No real root")
elif n == 0:
    print(f"Two same roots x={round(rootA)}")
else:
    print(f"Two different roots x1={round(rootA)} , x2={round(rootB)}")


# Q5.數列
t = int(input())
for i in range(t):
    p = list(map(int, input().split()))
    if p[1]-p[0] == p[2]-p[1]:
        ans = p[3] + (p[2]-p[1])
    else:
        ans = p[3]*(p[2] / p[1])
    print(p[0], p[1], p[2], p[3], round(ans))


# Q4.閏年平年判斷
while True:
    try:
        Y = int(input())
        if Y % 400 == 0:
            print("閏年")
        elif Y % 100 == 0:
            print("平年")
        elif Y % 4 == 0:
            print("閏年")
        else:
            print("平年")
    except EOFError:
        break


# Q3. 兩光法師時常替人占卜，由於他算得又快有便宜，因此生意源源不絕，時常大排長龍，他想算 得更快一點，因此找了你這位電腦高手幫他用電腦來加快算命的速度。
# 他的占卜規則很簡單，規則是這樣的，輸入一個日期，然後依照下面的公式：
# M=月  D=日  S=(M*2+D)%3 得到 S 的值，再依照 S 的值從 0 到 2 分別給與 普通、吉、大吉 等三種不同的運勢
M, D = map(int, input().split())
S = int((M * 2 + D) % 3)
if S == 0:
    print("普通")
elif S == 1:
    print("吉")
else:
    print("大吉")


# Q2.加法
a, b = map(int, input().split())
print(a+b)
