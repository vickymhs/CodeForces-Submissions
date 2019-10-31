#include<bits/stdc++.h>
using namespace std;
long long int n,i,x,j;
int main()
{
	
	cin>>n;
	if(n==1 || n==2)
	cout<<-1;
	else if(n==3)
	cout<<210;
	else
	{
		cout<<1;
		if(n%6==4)
		{
			for(i=0;i<n-3;i++)
			cout<<0;
			cout<<50;
		}
		if(n%6==5)
		{
			for(i=0;i<n-3;i++)
			cout<<0;
			cout<<80;
		}
		if(n%6==0)
		{
			for(i=0;i<n-4;i++)
			cout<<0;
			cout<<170;
		}
		if(n%6==1)
		{
			for(i=0;i<n-3;i++)
			cout<<0;
			cout<<20;
		}
		if(n%6==2)
		{
			for(i=0;i<n-4;i++)
			cout<<0;
			cout<<200;
		}
		if(n%6==3)
		{
			for(i=0;i<n-4;i++)
			cout<<0;
			cout<<110;
		}
	}
}
