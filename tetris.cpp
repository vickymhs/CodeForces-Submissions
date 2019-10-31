#include<bits/stdc++.h>
using namespace std;
long long int c[1005],i,n,x,j,m;
int main()
{
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x;
		c[x]++;
	}
	j=*min_element(c+1,c+n+1);
	cout<<j;
}
