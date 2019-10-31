#include<bits/stdc++.h>
using namespace std;
long long int n,m,i,j,a[2000005],b,p[2000005];
int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		p[i]=p[i-1]+a[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>b;
		j=lower_bound(p+1,p+n+1, b)-p;
		cout<<j<<" ";
		cout<<b-p[j-1]<<endl;
	}
}
