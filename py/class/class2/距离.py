from turtle import *
x1 ,y1 = eval(input("�����һ�������꣺"))
x2 ,y2 = eval(input("����ڶ��������꣺"))
from math import pow
distance = pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5)
penup()
hideturtle()
speed(10)
goto(x1, y1)
pendown()
goto(x2, y2)

