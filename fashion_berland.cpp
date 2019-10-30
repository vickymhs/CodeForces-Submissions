#include<bits/stdc++.h>
using namespace std;

int main()
{
	int z=0,f=0,n,i,a[1005];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		z++;
		else
		f++;
	}
	
	if(n==1)
	{
		if(z==0 && f==1)
		cout<<"YES";
		else
		cout<<"NO";
	}
	
	else
	{
		if(z==1)
		cout<<"YES";
		else
		cout<<"NO";
	}
}
