#include<iostream>

using namespace std;

int main()
{
	int n,k,a[50],i,c=0;
	cin>>n>>k;
	
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	for(i=1;i<=n;i++)
	{
		if(a[i]>0)
	{if(a[i]>=a[k])
	c++;
	}
	}
	cout<<c;
}
