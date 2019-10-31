#include<bits/stdc++.h>
using namespace std;
long long int t,f,d,x;
int solve()
{
	f=0;
	cin>>x;
	if(x%7 ==0 || x%3 ==0)
	f=1;
	else
	{
		while(x>0)
		{
		x=x-3;
		if(x%7==0)
		{
			f=1;break;
		}
	}
	}
	if(f==1)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
int main()
{
	cin>>t;
	while(t--)
	{
		solve();
	}
}
