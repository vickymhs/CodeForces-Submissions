#include<bits/stdc++.h>
using namespace std;
long long int n,i,x,s,j,a,b,y,k;

int func(long long int x, long long int y)
{
	if(y==0)
	return x;
	else
	return func(y,x%y);
}
int main()
{
	cin>>n;
	x=n/2;
	y=n-x;
	if(n%2==0)
	{
		x--;
		y++;
	}
	
	while(j==0)
	{
		s=x*y;
		k=func(x,y);
		//6cout<<k<<endl;
		//s=s/k;
		if(k==1)
		{
			a=x;
			b=y;j=1;
		}
		else
		{
			x--;
			y++;
			//j=1;
		}
	}
	cout<<a<<" "<<b;
}
