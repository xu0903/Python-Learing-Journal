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
