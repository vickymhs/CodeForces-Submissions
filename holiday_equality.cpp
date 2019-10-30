#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[105],n,i,j,c=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	j=*max_element(a,a+n);
	for(i=0;i<n;i++)
	{
		c=c+(j-a[i]);
	}
	cout<<c;
}
