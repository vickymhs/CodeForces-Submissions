#include<bits/stdc++.h>
using namespace std;
int n,i,j,r,d,s,v;
int main()
{
	cin>>n;
	while(n>0)
	{
		if(n<10)
		{
			s+=9;
			n=0;
			continue;
		}
		r=n%10;
		d=10-r;
		s+=d;
		n+=d;
		while(n%10==0)
		{
			n=n/10;
		}
	}
	cout<<s;
}
