''' This class has public acceess methods '''
# class Employee:
#     # constructor
#         def __init__(self, name, sal):
#             self.name = name
#             self.sal = sal
            
# emp = Employee("Ironman", 999000);
# print(emp.sal)

'''' This class has protected acceess methods '''
# class Employee:
#     def __init__(self, name, sal):
#         self._name = name
#         self._sal = sal

# class HR(Employee):
#     def task(self):
#         print ("We manage Employees")

# HRemp = HR("Ironman", 999000);
# print(HRemp._sal)
# print(HRemp._name)
# HRemp.task()

'''' This class has private acceess methods '''
# class Employee:
#     def __init__(self, name, sal):
#         # self.__name = name
#         self._sal = sal

# class HR(Employee):
#     def task(self):
#         self.__name = 'hello'
#         print(self.__name)
#         print ("We manage Employees")

# HRemp = HR("Ironman", 999000);
# print(HRemp._sal)
# # print(HRemp.__name)
# HRemp.task()


''' This is the usage of __del__ method '''
# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     def myfunc(self):
#         print("Hello my name is " + self.name)
#     def __del__(self):
#         print("Destroyed")  
# print (c"destroyed")    
# p1 = Person("John", 36)
# p1.myfunc()
# p1 = Person("Johnnn", 36)
# p1.myfunc()
# p1 = Person("Johnnnnn", 36)
# p1.myfunc()
# p1 = Person("John", 36)
# del p1

# class Person:
#     def __init__(self,name,age):
#         self.name=name
#         self.age=age
#     def myfunc(self):
#         print("Hello my name is "+ self.name)
#     def __del__(self):
#         Person = self.__class__.__name__
# print(Person,"Destroyed")
# p1 = Person("John",36)
# p1.myfunc()
 
''''''
# def product(a, b):
#     p = a * b
#     print(p)
# def product(a, b, c):
#     p = a*b*c
#     print(p)
# product(4, 5)
# product(4, 5, 5)


# def product(a, b, c):
#     p = a*b*c
#     print(p)
# def product(a, b):
#     p = a * b
#     print(p)
# product(4, 5)
# product(4, 5, 5)

# In above programs,if a function with same name is declared again with same or different parameters, then the new function will be the one program
# considers to be the function.

''''''

# class Compute:
#     def area(self, x = None, y = None):
#         if x != None and y != None:
#             return x * y
#         elif x != None:
#             return x * x
#         elif y != None:
#             return y * y
#         else:
#             return 0
# obj = Compute()
# print("Area Value:",obj.area())
# print("Area Value:",obj.area(4))
# print("Area Value:",obj.area(None,3))
# print("Area Value:",obj.area(3,5))

''' Operator Overloading '''

#Example1
# class Point:
#     def __init__(self, x=0, y=0):
#         self.x = x
#         self.y = y
# p1 = Point(1, 2)
# p2 = Point(2, 3)
# print(p1.x + p2.x,p1.y + p2.y)
# print(p1+p2)


# class Point:
#     def __init__(self,a,b):
#         self.a = a
#         self.b = b
#     def __str__(self): # This function is triggered when print() or str() is invoked or used on the class objects.
#         return f'{self.a}  {self.b}'
#     def __add__(self, other): # The funcion is triggered when addition is done to the objects of this class.
#         return self.a + other.b , self.b + other.a
# Ob1 = Point(1, 2)
# Ob2 = Point(2, 3)
# print(Ob1)
# Ob3 = Ob1 + Ob2 # used __add__ method
# print(Ob3) # used __str__ method

''''''
# import operator as op
# x = 'advanced programming is great'
# x = [i for i in x]
# a = set(x)
# d = {}
# for i in a:
#     d[i] = op.countOf(x,i)
# print(d)

''''''

# Python3 program to convert
# integer value to roman values

# Function to convert integer to Roman values
def printRoman(number):
	num = [1, 4, 5, 9, 10, 40, 50, 90,
		100, 400, 500, 900, 1000]
	sym = ["I", "IV", "V", "IX", "X", "XL",
		"L", "XC", "C", "CD", "D", "CM", "M"]
	i = 12
	
	while number:
		div = number // num[i]
		number %= num[i]
		while div:
			print(sym[i], end = "")
			div -= 1
		i -= 1

# Driver code
if __name__ == "__main__":
	number = 36
	print("Roman value is:", end = " ")
	printRoman(number)

''''''