#include<bits/stdc++.h>
using namespace std;
long long int x,i,j,m,n,a[1000005],b[1000005];
set<long long int> s;
set<long long int>:: iterator it;

int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(i=n;i>=1;i--)
	{
		s.insert(b[i]);
		a[i]=s.size();
	}
	//for(i=1;i<=n;i++)
	//cout<<a[i];
	for(i=1;i<=m;i++)
	{
		cin>>x;
		cout<<a[x]<<endl;
	}
}
