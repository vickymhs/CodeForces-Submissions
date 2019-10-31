n=int(input())
s=input()
l=r=u=d=0
for i in range(len(s)):
    if(s[i]=='L'):
        l+=1
    elif(s[i]=='R'):
        r+=1
    elif(s[i]=='U'):
        u+=1
    elif(s[i]=='D'):
        d+=1
print((2*min(l,r))+(2*min(u,d)))


