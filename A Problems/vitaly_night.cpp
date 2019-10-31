#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,a[205][205],c;
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<(2*m);j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<(2*m))
		{
			if(a[i][j]==1 || a[i][j+1]==1)
			c++;
			
			j+=2;
		}
	}
	cout<<c;
}
