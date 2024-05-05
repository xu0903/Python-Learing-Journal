# diction = A changeable, unordered collection of unique key: value pairs
#           Fast because they use hashing, allow us to access a value quickly.

capitals = {"United States": "Washington DC",
            "India": "New Dehli",
            "China": "Beijing",
            "Russia": "Moscow"}
capitals.update({"Germany": "Berlin"})
capitals.update({"United State": "Las Vegas"})
capitals.pop("China")
capitals.clear()

print(capitals["United States"])
print(capitals.get("Germany"))
print(capitals.keys())
print(capitals.values())
print(capitals.items())
for key, value in capitals.items():
    print(key, value)

# set = collection which is unordered, unindexed. NO duplicate values
# 無順序 無重複物

utensils = {"fork", "spoon", "fork", "knife"}
dishes = {"bowl", "plate", "cup", "knife"}

utensils.add("chopsticks")
utensils.remove("fork")
utensils.clear()
utensils.update(dishes)  # 加入其他set
dinner_table = utensils.union(dishes)
print(dishes.difference(utensils))  # 差集
print(utensils.intersection(dishes))  # 聯集

for x in dinner_table:
    print(x)


# tuple = collection which is ordered and unchangeable
#         used to group together related date

student = ("Richard", 21, "male")


# 2D lists
drink = ["soda", "cola", "beer"]
main_meal = ["pizza", "hamburger", "sushi"]
dessert = ["cake", "cookies", "pancake"]

food = [drink, main_meal, dessert]

print(food[2][0])

# list用法
food = ["pizza", "hotdog", "chocolate", "apple"]
print(food[0])
food.append("strawberry")
food.remove("hotdog")
food.pop()  # 刪除末項
food.sort() # 照字首排列
food.clear()
food.insert(2, "cake")  # 插入項目
for x in food:
    print(x)


# while True
#打破方法
#break, continue(跳過下個iteration並重複迴圈)
#pass


# 巢狀迴圈
rows = int(input("How many rows?"))
columns = int(input("How many columns?"))
symbol = str(input("Enter a symbol to use:?"))
for i in range(rows): # 列
    for j in range(columns): # 一行有幾個
        print(symbol, end="")
    print() #分幾行就重複幾次


# 倒數計時
import time
for seconds in range(3, 0, -1):
    print(seconds)
    time.sleep(1)
print("Happy New Year!")
