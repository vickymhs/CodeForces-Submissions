n=int(input())
a=[0]*6
for i in range(n):
    s=input()
    if(s=="purple"):
        a[0]=1
    elif(s=="green"):
        a[1]=1
    elif(s=="blue"):
        a[2]=1
    elif(s=="orange"):
        a[3]=1
    elif(s=="red"):
        a[4]=1
    elif(s=="yellow"):
        a[5]=1
print(6-n)
for i in range(6):
    if(a[i]==0):
        i=int(i)
        if (i == 0):
            print("Power")
        elif (i == 1):
            print("Time")
        elif (i == 2):
            print("Space")
        elif (i == 3):
            print("Soul")
        elif (i == 4):
            print("Reality")
        elif (i == 5):
            print("Mind")
