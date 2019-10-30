#include<bits/stdc++.h>
using namespace std;
long long int n,a[2000],b[2000],i,j,f,s;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			cout<<"rated";
			return 0;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] == b[i]  && a[i]>=a[j])
			{
				f=1;
			}
			else if(a[i] == b[i] && a[i]<a[j])
			{
				cout<<"unrated";
				return 0;
			}
		}
	}
	
	if(f==1)
	cout<<"maybe";
}
