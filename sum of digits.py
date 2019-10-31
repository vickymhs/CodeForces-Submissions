n=input()
#print(type(n))
#print(len(n))

c=0;
while(len(n)>1):
    s = 0;
    for i in range(len(n)):
        s = (s + int(n[i]))
    c+=1
    n=str(s)
    #print(n)
print(c)