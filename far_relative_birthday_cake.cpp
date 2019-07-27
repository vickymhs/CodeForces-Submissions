#include<bits/stdc++.h>
using namespace std;
int n,i,j,s,c;
char a[105][105];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='C')
			c++;
		}
		s+=(c*(c-1))/2;
	}
	for(j=0;j<n;j++)
	{
		c=0;
		for(i=0;i<n;i++)
		{
			if(a[i][j]=='C')
			c++;
		}
		s+=(c*(c-1))/2;
	}
	cout<<s;
}
