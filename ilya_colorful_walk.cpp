#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[300005],c,d1,d2;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	c=a[0];
	for(i=n-1;i>0;i--)
	{
		if(c!=a[i])
		{
			d1=i;
			break;
		}
	}
	c=a[n-1];
	for(i=0;i<n-1;i++)
	{
		if(c!=a[i])
		{
			d2=n-1-i;
			break;
		}
	}
	cout<<max(d1,d2);
}
