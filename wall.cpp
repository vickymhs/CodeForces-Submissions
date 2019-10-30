#include<bits/stdc++.h>
using namespace std;
long long int x,y,a,b,i,j,m,n,lcm;
int main()
{
	cin>>x>>y>>a>>b;
	lcm=(x*y)/__gcd(x,y);
	m=b/lcm;
	
	if(a%lcm==0)
	{
		n=a/lcm;
		//n=n+1;
		cout<<m-n+1;
	}
	
	else
	{
		n=a/lcm;
		cout<<m-n;
		
	}
	
}
