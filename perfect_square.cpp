#include<bits/stdc++.h>
using namespace std;
long int x,i,j,n,a[1005];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=n-1;i>=0;i--)
	{
		x=sqrt(a[i]);
		if(x*x != a[i])
		{
			cout<<a[i];
			return 0;
		}
	}
}
