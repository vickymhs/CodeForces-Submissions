#include<bits/stdc++.h>
using namespace std;

long long int a[105],b[105],c[105],i,j;
int main()
{
	long long int n,p,q,flag=0;
	cin>>n;
	
	cin>>p;
	for(i=0;i<p;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>c[i];
		b[c[i]]++;
	}
	
	for(i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	cout<<"I become the guy.";
	else
	cout<<"Oh, my keyboard!";
}
