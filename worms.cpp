#include<bits/stdc++.h>

using namespace std;
long long int c[100005];
int main()
{
	long long int n,a[100005],y,i,m,q,b[100005];
	c[0]=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		c[i]=c[i-1]+a[i];
	//	cout<<c[i];
	}
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>q;
		b[i]=lower_bound(c,c+n,q)-c;
		//cout<<b[i]<<endl;
		if(c[i]!=q)
		{
			//b[i]--;
		}
	}
	for(i=1;i<=m;i++)
	cout<<b[i]<<endl;
}
