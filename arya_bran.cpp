#include<bits/stdc++.h>
using namespace std;
long long int n,k,i,j,a[1100005],c;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<=8)
		{
			k=k-a[i];
		}
		else
		{
			k=k-8;
			a[i+1]+=a[i]-8;
		}
		if(k<=0)
		{
			c=1;break;
		}
	}
	
	if(c==1)
	cout<<i+1;
	else
	cout<<-1;
}
