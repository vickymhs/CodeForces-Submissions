#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int a,b,s,c;
	cin>>a>>b>>s;


	c=fabs(a)+fabs(b);
	if(c<=s)
	{
		c=c-s;
		if(c%2==0)
		cout<<"Yes";
		else
		cout<<"No";
	}
	else
	cout<<"No";
	}
