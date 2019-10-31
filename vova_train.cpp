#include<bits/stdc++.h>
using namespace std;
long long int t,n,L,v,l,r,c,st,en;
int solve()
{
	cin>>L>>v>>l>>r;
	n=L/v;
	c=0;
	if(l%v!=0)
	{
		st=l+(v-(l%v));
	}
	else
		st=l;
		
	if(r%v!=0)
	{
		en=r-(r%v);
	}
	else
		en=r;
	c=((en/v)-(st/v))+1;
	cout<<n-c<<endl;
}
int main()
{
	cin>>t;
	while(t--)
	solve();
}
