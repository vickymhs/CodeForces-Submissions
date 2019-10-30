#include<bits/stdc++.h>
using namespace std;
long long int n,k,a[1000005],i,j,c;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
	c=*min_element(a,a+n);
	for(i=0;i<n;i++)
	{
		if( (a[i]-c)% k == 0)
		
		j=j+(a[i]-c);
		
		else
		{
			cout<<-1; return  0;
		}
	}
	cout<<j/k;
}
