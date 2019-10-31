import math
n=int(input())
a=input()
x,y=a.split()
x=int(x)
y=int(y)
d1=(x-1)+(y-1)
d2=(n-x)+(n-y)
#print(d1)
#print(d2)
if d1<=d2 :
	print("White")
else:
	print("Black")
