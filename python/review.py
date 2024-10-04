#1注释


print("Hello World") #this is a comment

''''
    this is a multi-line comment
'''
"""
    this is a multi-line comment2
"""

#2变量
a = 10

print(f"this is a with {a}")

print("this is %d"%a)

print("this is a string with no \\n",end = "")

# a = int(input("Enter a number: "))

# print(f"You entered {a}")

#3随机数
import random

a = random.randrange(2,50)

print(a)

b = random.uniform(0,1)

c = random.random()

#4字符串
d = "hello"

e = "world"

print(d+e)

#5条件语句
a = 11

if a>10:
    print("a is greater than 10")
elif a<10:
    print("a is less than 10")
else:
    print("a is equal to 10")

#6循环语句
a = 1
while a<=10:
    print(a)
    a+=1

for i in range(1,11,2):
    print(i)

#7切片
a = [1,2,3,4,5,6,7,8,9,10]

print(a[1:5])

#8字符串
s = "hello world"

s.replace("h","H")

print(s)

arr = s.split(" ")

print(arr)

for i in arr:
    print(i)

string  = "-".join(arr)

print(string)

p = "hello world".title()

print(p)

b = "hello world".upper()

print(b)

c = "HELLO WORLD".lower()

print(c)

q = "hello world".capitalize()

print(q)

k = "hello ".rstrip()

l = " world".lstrip()

o = "  hello   ".strip()

print(k)
print(l)
print(o)

if 'o' not in k:
    print("no")
else:
    print("yes")

a  = "hello world"

a+= " python"

print(a)

#9列表

w = [1,2,3,"sss"]


'''
m = w #浅拷贝
'''
m = w.copy() #深拷贝

m[1] = 3

print(w)

n = [2,2,2,2,1,2,3,4,5]

n.sort()#直接修改n的元素

#m = n.sorted()#返回一个新的排序后的列表

print(n)

#10元组

t = (1,2,3,4,5)

print(t[1:3])

#11字典/集合

dir = {"name":"John","age":30,"city":"New York"}

for k,v in dir.items():
    print(k,v)

s = set()#空集合

a = {}#空字典

print(dir["name"])

#12函数

def func(): 
    print("hello world")

func()

def a(*args):#可变参数
    print(args)

a(1,2,3,4,5)

def b(**kwargs):#关键字参数
    print(kwargs)

b(name="John",age=30,city="New York")

class people():
    def __init__(self,name):
        self.name = name
        print("hello world")
        print(self.name)

a = people("John")
