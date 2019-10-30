#include<bits/stdc++.h>
using namespace std;
long long int a[100005];
int main()
{
	long long int n,b[100005],i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		b[i]=a[i]+a[i+1];
	}
	for(i=1;i<=n;i++)
	cout<<b[i]<<" ";
}
