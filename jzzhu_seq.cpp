#include<bits/stdc++.h>
using namespace std;
long long x,y,i,j,n,m=1e9+7;
int main()
{
	cin>>x>>y;
	cin>>n;
	if(n%6==1)
	j=x%m;
	else if(n%6==2)
	j=y%m;
	else if(n%6==3)
	j=(y%m-x%m)%m;
	else if(n%6==4)
	j=(-x)%m;
	else if(n%6==5)
	j=(-y)%m;
	else if(n%6==0)
	j=((-y)%m+x%m)%m;
	
	if(j<0)
	cout<<m+j;
	else
	cout<<j;
}
