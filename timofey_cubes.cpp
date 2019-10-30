#include<bits/stdc++.h>
using namespace std;
long long int n,a[1000005],i,j,c;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	if(n%2==0)
	j=n/2;
	else
	j=n/2 +1;
	for(i=1;i<=j;i++)
	{
		if(i%2!=0)
		swap(a[i],a[n-i+1]);
	}
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
}
