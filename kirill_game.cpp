#include<bits/stdc++.h>
using namespace std;
long long int l,r,x,y,k,i,j,c,f;
int main()
{
cin>>l>>r>>x>>y>>k;
f=0;
for(i=x;i<=y;i++)
{
c=i*k;
if(c>r || c<l)
{
f=0;
}
else
{
f=1;break;
}
}
if(f==1)
cout<<"YES";
else
cout<<"NO";
}
