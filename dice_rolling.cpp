#include<bits/stdc++.h>
using namespace std;
int t,x,i,j,n,c;
int solve()
{
	cin>>n;
	c=0;
	for(i=2;i<=7;i++)
	{
		if(n%i==1)
		continue;
		else if(n%i==0)
		{
			c=n/i;
		}
		else
		{
			c=(n/i)+1;
		}
		if(c!=0)
		{
			cout<<c<<endl;
			break;
		}
	}
	return 0;
}
int main()
{
	cin>>t;
	while(t--)
	solve();
}
