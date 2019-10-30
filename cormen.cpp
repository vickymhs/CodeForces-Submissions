#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,k,i,a[505],b[505],m,c=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n-1;i++)
	{
		
		m=a[i]+a[i+1];
		//cout<<m<<endl;
		if(m<k)
		{
			a[i+1]+=k-m;
			c+=k-m;
		
		}
		//for(int j=0;j<n;j++)
		//cout<<a[j];
		//cout<<endl;
	}
	cout<<c<<endl;
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		cout<<b[i]<<" ";
	}
}
