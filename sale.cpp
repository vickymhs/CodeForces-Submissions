#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int m,n,a[10005],i,c=0,s=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(a[i]<=0)
		{
			c++;
			if(c<=m)
			s=s+a[i];
		}
	}
	
	cout<<fabs(s);
}
