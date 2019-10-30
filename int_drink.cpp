#include<bits/stdc++.h>

using namespace std;

int main()
{
	long int n,i,q,x[100005],m,b[100005];
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>x[i];
	
	sort(x,x+n);
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>m;
		b[i]=upper_bound(x,x+n,m)-x;
	}
	
	for(i=0;i<q;i++)
	cout<<b[i]<<"\n";
}
