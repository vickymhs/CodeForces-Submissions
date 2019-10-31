#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000],i,j;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<k;i++)
		cin>>b[i];
	sort(b,b+k);
	j=k-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			a[i]=b[j];
			j--;
		}
	}
	int f=0;
	for(i=0;i<n-1;i++)
	{
		//cout<<a[i];
		if(a[i]>=a[i+1])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	cout<<"No";
	else
	cout<<"Yes";
}
