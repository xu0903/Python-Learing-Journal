#Quiz Games
# -------------------------------
def new_game():
    guesses = []  # Q:為什麼需要用list? Ans:最後要印出作答情況
    correct_guesses = 0
    question_number = 1
    for key in questions:
        print("-------------------------------\n", key)
        for i in options[question_number-1]:   # 將選項"分別"印出
            print(i)
        guess = input("Enter A, B, C or D: ").upper()

        correct_guesses += check_answer(questions.get(key), guess)  # questions.get(key) 設置成answer輸入
        guesses.append(guess)
        question_number += 1
    display_score(correct_guesses, guesses)


# -------------------------------

def check_answer(answer, guess):
    if answer == guess:
        print("Correct!")
        return 1
    else:
        print("Wrong!")
        return 0


# -------------------------------
def display_score(correct_guesses, guesses):
    print("-----------------")
    print("Result")
    print("-------------------------------")

    print("Answers:", end="")
    for i in questions:
        print(questions.get(i), end=" ")
    print()

    print("Guesses:", end="")
    for i in guesses:
        print(i, end=" ")
    print()

    score = (correct_guesses/len(questions))*100
    print("Your score is:", score, "%.")
# -------------------------------


def play_again():
    response = input("Do you want to play again?(yes/no)").lower()
    if response == "ok" or response == "yes":
        return True
    else:
        return False


# -------------------------------
# Main Game
questions = {"How many days in August?": "B", "Which country in the options had ever conqueror Taiwan before?": "C"}
options = [["A.30", "B.31", "C.32", "D.I don't know."], ["A.Korea", "B.New Zealand", "C.Japan", "D.America"]]
new_game()

while play_again():
    new_game()

print("Thank you for playing~")

# 剪刀石頭布 -----------------------------------------------------
import random

choices = ["paper", "scissors", "stone"]
computer_choice = random.choice(choices)


def demonstrate(player_choice, computer_choice):
    print("Player: " + player_choice)
    print("Computer: ", computer_choice)


player_choice = None  # 要先在圈外定義,缺少這行會錯誤


while player_choice not in choices:
    player_choice = str(input("Paper, Scissors or Stone?")).lower()
if player_choice == computer_choice:
    print("Computer won this game.")
elif player_choice == "scissors" and computer_choice == "rock":
    print("Computer won this game.")
elif player_choice == "paper" and computer_choice == "scissors":
    print("Computer won this game.")
elif player_choice == "rock" and computer_choice == "paper":
    print("Computer won this game.")
else:
    print("Player won this game.")

demonstrate(player_choice, computer_choice)
# ------------------------------------------------------


# module = a file containing Python code. May contains function,classes,etc.
# used with ,modular programing, which is separate a program to a part
# *若是在分支中會找不到該檔案

#寫法一
import hello as hi  # 可以縮寫 或 更改 原有function的名字
hi.hello()

#寫法二
from hello import hello, goodbye
from hello import *  # (用 * 取代 代表import all)
hello()
goodbye()

help("modules") # beautifulsoup & pickle

#刪除檔案
# remove不會刪除目錄(directory),會引發 IsADirectoryError; rmdir只能刪除空目錄,否則會引發 OSError 或 NotADirectoryError
import os
import shutil

path = "copy.txt"
try:
    os.remove(path)
    os.rmdir(path)
    shutil.rmtree(path)  # =remove tree 超危險 會刪除整個directory跟裡面所有資料,無法復原,謹慎使用!
    print("File was delete successfully")
except FileNotFoundError:
    print(path + " is not found.")
except PermissionError:
    print("You don't have permission to delete that file.")
except OSError:
    print("You can't delete it by using that function. ")
else:
    print("File was deleted.")

# 移動檔案
import os
source = "test.txt"
destination = "C:\\Users\\h9100\\OneDrive\\桌面\\test.txt.txt"
try:
    if os.path.exists(destination):
        print("File exists.")
    else:
        os.replace(source, destination)
        print(source + "was replaced.")
except FileExistsError:
    print(source + "is not found.")

# 複製檔案
# copyfile( = copies contents of a file
# copy() = copyfile() + permission mode + destination can be a directory
# copt2() = copy() + copies metadata (file's creation and modification times)

import shutil
shutil.copyfile("test.txt", "copy.txt")  # src(source) dst(destination)

# 撰寫folder的文件
text = "Nice to meet you!\n"
with open("test.txt", "w") as file:
    file.write(text)

# 開啟folder的文件
try:
    with open("test.txt") as file:
        print(file.read())
except FileNotFoundError:
    print("That file was not found:")
except FileExistsError:
    print("That file was not exist:")


# os 開啟電腦中的文件 需修改成\\
import os
path = "C:\\Users\\h9100\\OneDrive\\桌面\\test.txt.txt"
if os.path.exists(path):
    print("That location exists!")
    if os.path.isfile(path):
        print("That is a file!")
    elif os.path.isdir(path):
        print("That is a directory")
else:
    print("That location doesn't exist!")

# exception = events detected during execution that interrupt the flow of a programing

try:
    numerator = int(input("Enter a number to divide: "))
    denominator = int(input("Enter a number to divide by: "))
    result = numerator / denominator

except ValueError as e:
    print(e)
    print("Enter only number, pls.")
except ZeroDivisionError as e:
    print(e)
    print("You can't divide bu zero: idiot:")
except Exception as e:
    print(e)
    print("Something went wrong")
else:
    print(result)
finally:
    print("This will always execute")

# random module application
import random
x = random.randrange(1,6)
y = random.random()

game = ["rock", "paper", "scissors"]
z = random.choice(game)

cards = ["A", 2, 3, 4, 5, 6, 7, 8, 9, 10, "J","Q","K"]

print(x)
print(y)
print(z)

random.shuffle(cards)

print(cards)
# str.format() 後面可以放字串或是變數 {}可放數字 改變位置 預設為照順序填入
animals = "pigs"
print("The {1} are eating {0}.".format(animals, "apples"))

name = "Rich"
print("Hello, I'm {:10}.Nice to meet you.".format(name))
print("Hello, I'm {:<10}.Nice to meet you.".format(name))
print("Hello, I'm {:>10}.Nice to meet you.".format(name))
print("Hello, I'm {:^10}.Nice to meet you.".format(name))

pi = 3.14159
print("The number pi is {:.3f}".format(pi))
number = 1000
print("The number is {:,}".format(number))  # 以千位分隔符格式化
print("The number is {:b}".format(number))  # 2 進位
print("The number is {:o}".format(number))  # 8 進位
print("The number is {:X}".format(number))  # 16 進位
print("The number is {:E}".format(number))  # 科學記號

# Q34.二進位轉換(比較){:b}
while True:
    try:
        n = int(input())
        print(bin(n)[2:])
    except EOFError:
        break

*args用於處理位置參數的可變長度，而**kwargs用於處理關鍵字參數的可變長度。
# **kwargs =    parameter that will pack all arguments into a dictionary
#           useful so that function can accept a varying amount of arguments

def hello(**kwargs):
    print("Hello " + kwargs["first"] + " " + kwargs["last"])
    print("Hello", end="")
    for key, value in kwargs.items():
        print(value, end=" ")


hello(title=" Mr.", first="Xu", middle="Ri,", last="Li")
# # *args =    parameter that will pack all arguments into a tuple
# #           useful so that function can accept a varying amount of arguments
#
def add(*args):
    sum = 0
    for i in args:
        sum += i
    return sum


print(add(1, 2, 3))


# nested functions calls = Function calls inside other function calls
#                          innermost function calls are resolved first
#                          returned value is used as argument for the next outer function

print(round(abs(float(input("Enter a whole positive number:  ")))))


# keyword arguments = arguments preceded by an identifier when we pass them to a function.
#                     The order of the arguments doesn't matter, unlike positional arguments.
#                     Python knows the names of the argument that our function receives.
# 可用宣告分配位置
def hello(first, middle, last):
    print(("Hello " + first + " " + middle + " " + last))


hello(last="Li", middle="Ri", first="Xu")


# return statement = Function send Python values/objects back to caller.
#                    These values/objects are known as the function's return value

def multiply(number1, number2):
    result = number1 * number2
    return result

x = multiply(6, 8)

print(x)

# function = a block of code which is executed only when it is called.
def introduction(first_name, last_name, age):
    print("Hello " + first_name + " " + last_name)
    print("You are " + str(age) + " years old")
    print("Have nice day!")


introduction("Xu","Richard",21)


# index operator [] = gives a sequence's element (str, list, tuples)

name = "Xu, Richard"

if name[0].islower():
    name = name.capitalize()

first_name = name[:2].upper()
last_name = name[4:].lower()
last_character = name[-1]

print(name)
print(first_name)
print(last_name)
print(last_character)
