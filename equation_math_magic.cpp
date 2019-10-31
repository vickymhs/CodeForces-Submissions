#include<bits/stdc++.h>
using namespace std;
long long int i,j,t,n;
int solve()
{
	cin>>n;
	long long int c=0,base=2,res=1;
	while(n>0)
	{
		if(n%2==1)
			c++;
		n/=2;
	}
	
	while(c>0)
	{
		if(c%2==0)
		{
			c=c/2;
			base*=base;
		}
		else
		{
			c--;
			res*=base;
			c=c/2;
			base*=base;
		}
	}
	cout<<res<<endl;
	return 0;
}
int main()
{
	cin>>t;
	while(t--)
	{
		solve();
	}
}
