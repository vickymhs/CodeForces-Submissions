#include<bits/stdc++.h>
using namespace std;
long long int x,y,n,a[105],c[105],i,j,s;
int main()
{
	cin>>n>>x;
	for(i=0;i<n;i++)
	{
		cin>>y;
		a[y]=1;
	}
	if(a[x]==1)
	s=1;
	
	for(i=0;i<x;i++)
	{
		if(a[i]!=1)
		s++;
	}
	cout<<s;
}
