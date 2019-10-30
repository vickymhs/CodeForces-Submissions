//presents
#include<iostream>

using namespace std;

int main()
{
	int n,a[100],b[100],i,t;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(i=1;i<=n;i++)
	{
		t=a[i];
		b[t]=i;	
	}
	
	for(i=1;i<=n;i++)
	cout<<b[i]<<" ";
}
