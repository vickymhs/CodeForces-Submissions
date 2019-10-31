#include<bits/stdc++.h>
using namespace std;
long long int n,i,m,a[500],b[500],ce,co,x,y,u,v;
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	y=*max_element(b,b+m);
	if(y>0)
	{
		x=a[n-2];
	}
	else
	{
		x=a[0];
	}
	cout<<x*y<<endl;
}
