#include<bits/stdc++.h>
using namespace std;
long long int n,m,a[1000005],i,j,k,s;
int main()
{
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	s=s+(a[0]-1);
	for(i=0;i<m-1;i++)
	{
		if(a[i]<=a[i+1])
		s=s+(a[i+1]-a[i]);
		else
		s+=a[i+1]-a[i]+n;
		//cout<<s<<endl;
	}
	cout<<s;
}
