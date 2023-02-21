# a = "Hello, World!"
# print(a[1])

# b = "Hello, World!"
# print(b[::-1]) # ( starting , end, step )

# """ thisset = {"apple", "banana", "msdjb"}
# thisset.remove("banadna")
# print(thisset) """

# thisset = {"apple", "banana", "msdjb"}
# thisset.discard("breganana")
# print(thisset)

# # x = 100
# # try:
# #     print(x)
# # except:
# #     print("dsbsjdbv")

# # x = -1
# # if x < 0:
# #     raise Exception("Sorry, no numbers below zero")
# ans = ''
# for i in range(0,26):
#     ans = ans + chr(97+i)
# print(ans)
# print(ans[::-1])
# # myTuple = ("John", "Peter", "Vicky")

# # x = "#".join(myTuple)

# # print(x)

# class Person:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age
# p1 = Person("John", 36)
# print(p1.name)
# print(p1.age)

# class Person:
#     def __init__ (mysillyobject , name,age):
#         mysillyobject.name = name
#         mysillyobject.age = age
#     def myfunc(abc):
#         print("Hello my name is " + abc.name)
#         print("Hello my age is " + f"{abc.age}")
    
#     def myfunc1(abc_1):
#         print("Hello my name is " + abc_1.name)
#         print("Hello my age is " + f"{abc_1.age}")
#         # print("Hello my name is " + self.name + 'and age is ' + f"{self.age}.")
# p1 = Person("sdvb",67)
# # p1.myfunc()
# # p1.myfunc1()
# setattr(p1,'name','Yaswanth')
# print(hasattr(p1, 'name'))
# print( getattr(p1,'name'))
# # p1.myfunc()
# delattr(p1,'name')
# print(hasattr (p1,'name'))

# a = 5
# b = 3
# print((a/b) * b+a/b)
# print((a%b) * b+a/b)
# print((a%b) * b+a//b)
# print((a//b) * b+a%b)

# def fun():
#     x = 10

# k = fun() # a function without return gives value 'None' instead of error message.
# print(k) # Output: None

# class Person:
#     def __init__(self, name,age):
#         self.name = name
#         self.age = age

#     def myfunc (self):
#         print("Hello my name is " + self.name)
        
# print ("Person.__doc __:", Person.__doc__)
# print ("Person.__name __:", Person.__name__)
# print ("Person.__module __:", Person.__module__)
# print ("Person.__bases __:", Person.__bases__)
# print ("Person.__dict __:", Person.__dict__)

''''''

# i,x,a=1,2, input('Enter expression')
# while True if eval(a)>i else False:
#     i=i+1
#     if(i < 3):
#         continue
#     elif((i >= 3) and (i<=5)):
#         pass
#     else:
#         break
#     print(i)

''''''

# def fun(*a):
#     print(a[0] + a[1] + a[2] + a[3])

# fun("dfbfd","ddfvb","sddf","ewut")

''''''

# import array as arr
# a = arr.array('i',[1,2,4,5,6,3,2,5])
# print(a)

''''''

# tuple1 = ('Mary', 26 , 98, 'john', 28, 96)
# tinytuple = (123,'john')

# print(tuple1)
# print(tuple1[0])
# print(tuple1[1:3])
# print(tuple1[2:])
# print(tinytuple)
# print(tinytuple)

# newtuple =  tuple1 + tinytuple
# print(newtuple)

''''''

# import operator as op
# a = [10,10,4,5,6,7,5,4,8]
# l = set(a)
# print(l)
# count = 0
# for i in l:
#     count = op.countOf(a,i)
#     print(str(i) + "=" + str(count))
    
''''''

# binary = input()
# l = list(binary)
# b = set(l)
# t = {'0','1'}
# if b == t:
#     print("yes it is binary")
#     print(int(binary,2))
# else:
#     print("no it is not binary")

''''''

# l  = []
# for i in range(0,5):
#     a = int(input("Enter a number: "))
#     l.append(a)
# print(l)

''''''

# x = int(input())
# sum = tmp = 0
# while ( x > 0 ):
#     tmp = x%10
#     sum += tmp**3
#     x = x//10
# print(sum)

''''''

# l = []
# for i in range(0,6):
#     x = input()
#     if x.isdigit():
#         l.append(int(x))
#     else:
#         l.append(x)
# print(l)

''''''

# l = ['sefhs','sdygyjs','46','wdhu','45','74']
# count=0
# for i in l:
#     if i.isdigit():
#         count += 1
# print(len(l) - count)

''''''
# tuple_names = ('Nicholas', 'Michelle', 'Alex')
# list_names = ['Nicholas', 'Michelle', 'Alex']
# print(tuple_names.__sizeof__())
# print(list_names.__sizeof__())
# output : 48 104
# names = ("Nicholas", "Michelle", "Alex")
# names[0] = "Samuel"
# Output: Error

''''''

# a = 3
# b = 4
# print(a & b)
# print(a | b)
# print(a ^ b)

''''''

# D = {1: 'Geeks', 2: 'For', 3: 'Geeks'}
# print("\nDictionary with the use of Integer Keys: ")
# print(D)

# Dict = dict([(1, 'Geeks'), (2, 'For')])
# print("\nDictionary with each item as a pair: ")
# print(Dict)

# Dict = {}
# print("Empty Dictionary: ")
# print(Dict)
# Adding elements one at a time
# Dict[0] = 'Geeks'
# Dict[2] = 'For'
# Dict[3] = 1
# print("\nDictionary after adding 3 elements: ")
# print(Dict)

# Dict['Value_set'] = 2, 3, 4
# print("\nDictionary after adding 3 elements: ")
# print(Dict)

# Dict = {}
# Dict[5] = {'Nested' :{'1' : 'Life', '2' : 'Geeks'}}
# print(Dict)
# print(Dict[5])
# print(Dict[5]['Nested'])
# print(Dict[5]['Nested']['1'])
# print(Dict[5]['Nested']['2'])
# print(Dict[5]['Nested'].get('1'))
# print(Dict[5]['Nested'].get('2'))

# Dict = {1: 'Geeks', 'name': 'For', 3: 'Geeks'}
# # Deleting a key
# # using pop() method
# pop_ele = Dict.pop(1)
# print('\nDictionary after deletion: ' + str(Dict))
# print('Value associated to poped key is: ' + str(pop_ele))

# Dict = {1: 'Geeks', 'name': 'For', 3: 'Geeks'}
# # Deleting a key
# # using pop() method
# pop_ele = Dict.popitem()
# print('\nDictionary after deletion: ' + str(Dict))
# print('Value associated to poped key is: ' + str(pop_ele))


# d = {}
# x  = int(input("Enter no of items: "))
# for i in range(x):
#     d[i] = input()
# print(d)

''''''
# r = ['sver','wegse','rfs','easjzesee','esvbj']
# l = ['sver','wegse','wfs','easjzesee','esvbj']
# print(max(r))
# print(max(l))

''''''

# l = [chr(x)+chr(x+1) for x in range(97,97+26)]
# x  = [i[::-1] for i in l]
# print(x)

# print(''.join(chr(x) for x in range(97,97+26)))

''''''

# def myFun(x, y=50):
#     print("x:", x)
#     print("y:", y)
# # We call myFun() with only argument
# myFun(10)

# def myFun(*argv):
#     for arg in argv:
#         print(arg)
# myFun('Hello', 'Welcome', 'to', 'GeeksforGeeks')

''''''

# a, b = 10, 20
# print( (b, a) [a < b] )

''''''

# nested_tuple = ('sdv','wdsvbj',('sdv','wdsv'))
# print(nested_tuple[2][1])

''''''

# b = "Hello, World!"
# print(b[0:5])

''''''

# d = {'0':'yaswanth','1':'Deepthi'}
# print(d['0'])

''''''

# list = [chr(x) for x in range(97,97+26)]
# list_1 = (chr(x) for x in range(97,97+26))
# list_1 = ('q','q')
# print(list.count('q'))
# print(list_1.count('q'))
# print(list_1.count('q'))

''''''

# def my_fun(*kids):
#     print('This ' + kids[1] + ' is ' + f'{kids[2]}')
# my_fun('jsbch','sekb',12)

''''''

def tri_recursion(k):
    if(k > 0):
        result = k + tri_recursion(k-1)
        print(result)
    else:
        result = 0
    return result
print(" n nRecursion Example Results")
tri_recursion(0)

