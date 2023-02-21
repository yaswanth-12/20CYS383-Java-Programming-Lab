# import math
# class Circle:
#     def __init__(self,r):
#         self.r = r
#         self.pi = 3.141592653589793238
#     def get_result(self):
#         return self.r
#     def area(self):
#         return math.pi*((self.r)**2)
#     def __add__(self, other):
#         return Circle(self.r + other.r)
#     def __sub__(self, other):
#         return Circle(self.r - other.r)
#     def __mul__(self, other):
#         return Circle(self.r * other.r)
#     def __LT__(self, other):
#         return self.r < other.r
    

# input1 = int(input())
# c1 = Circle(input1)
# print(c1.get_result())
# print(c1.area())

# input2=int(input()) 
# c2 = Circle(input2)
# print(c2.get_result())
# print(c1.area())
 
# c3 = c1 + c2
# print(c3.get_result())
 
# c3 = c2 - c1
# print(c3.get_result())
 
# c4 = c1 * c2
# print(c4.get_result())
 
# c5 = c1 < c2
# print(c5.get_result())
 
# c5 = c2 < c1
# print(c5.get_result())