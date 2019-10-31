#include<bits/stdc++.h>
using namespace std;
long long int n,x,b[1000005],i,j,c,s;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		s=s+x;
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];	
	}
	sort(b,b+n);
	c=b[n-1]+b[n-2];
	//cout<<c;
	if(c>=s)
	cout<<"YES";
	else
	cout<<"NO";
}
