#include<bits/stdc++.h>
using namespace std;
long long int c[10005],i,j,n,k,a,b,d;

int fib()
{
	c[1]=1;
	c[2]=1;
	a=1;b=1;
	for(i=3;i<=20;i++)
	{
		d=a+b;
		//cout<<d<<" ";
		c[d]=1;
		a=b;
		b=d;
	}
	//for(i=1;i<=20;i++)
	//cout<<c[i]<<" ";
}
int main()
{
	fib();
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(c[i]==1)
		cout<<'O';
		else
		cout<<'o';
	}
}
