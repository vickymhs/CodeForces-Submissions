#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n,p[100],q[100],i,j,c=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>p[i]>>q[i];
	
	for(i=0;i<n;i++)
	{
		if(q[i]-p[i]>=2)
		c++;
	}
	cout<<c;
}
