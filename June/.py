class Car:
    color = None

def change_color(car, color):
    car.color = color

car_1 = Car()
car_2 = Car()
car_3 = Car()

change_color(car_1, "red")
change_color(car_2, "white")
change_color(car_3, "black")

print(map(car_1.color, car_2.color, car_3.color))
# Prevents a user from creating an object of that class
# + compel a user to override abstract methods in child class

# abstract class = a class which contains one or more abstact methods.
# abstract method = a method that has a declaration but does not have an implementation.
# 1.抽象類本身不能被實例化，只能被繼承 2.用來檢查子分類有無缺漏程式碼
# 個人理解:抽象(架構)母分類有的,子分類都要有,但無法直接指定母分類執行,像是骨架,可以決定作品如何展現,但無法直接當成成品。

from abc import ABC, abstractmethod

class Vehicle:

    @abstractmethod
    def go(self):
        pass

    @abstractmethod
    def stop(self):
        pass

class Car(Vehicle):
    def go(self):
        print("You are driving a car.")

class Motorcycle(Vehicle):
    def go(self):
        print("You are riding a motorcycle.")

vehicle = Vehicle()
car = Car()
motorcycle = Motorcycle()

vehicle.go()
car.go()
motorcycle.go()


# super() = Function used to give accesss to methods of a parent class.
#           Returns a temporary object of a parent class when used

class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length*self.width

class Square(Rectangle):
    def __init__(self, length, width):
        super().__init__(length, width)

class Cube(Rectangle):
    def __init__(self, length, width,height):
        super().__init__(length, width)
        self.height = height
    def volume(self):
        return self.length * self.width * self.height

square = Square(3, 3)
cube = Cube(3, 3, 3)

print(square.area())
print(cube.volume())
