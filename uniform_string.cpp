#include<bits/stdc++.h>
using namespace std;
int t,n,k,d;
int solve()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		d=i%k;
		cout<<(char)(97+d);
	}
	cout<<endl;
	return 0;
}
int main()
{
	cin>>t;
	while(t--)
	solve();
}
