#include<bits/stdc++.h>
using namespace std;
long long int a[1000005];
int main()
{
	long long int n,d=0,i,j,c=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==-1)
		{
			d=d+a[i];
			if(c>0)
			{
				//c=c+a[i];
				d++;
				c--;
			}
			
		}
		else
		{
			c=c+a[i];
		}
	}
	cout<<fabs(d);
}
