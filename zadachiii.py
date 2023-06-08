1.Say "Hello, World!" With Python
   print("Hello, World")  

2.Python If-Else
#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())

    if n % 2 != 0:
        print("Weird")
    elif n % 2 == 0 and n in range(2, 6):
        print("Not Weird")
    elif n % 2 == 0 and n in range(6, 21):
        print("Weird")
    elif n % 2 == 0 and n > 20:
        print("Not Weird")

3.Arithmetic Operators
if __name__ == '__main__':
    a = int(input())
    b = int(input())
    print(a+b)
    print(a-b)
    print(a*b)

4.Python: Division
if __name__ == '__main__':
    a = int(input())
    b = int(input())
    print(int(a/b))
    print(float(a/b))

5.Loops
if __name__ == '__main__':
    n = int(input())
   
    for i in range(n):
        print(i*i)
    

