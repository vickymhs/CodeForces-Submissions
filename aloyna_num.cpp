#include<bits/stdc++.h>
using namespace std;
long long int a[100],b[100];
int main()
{
	long long int n,m,s=0;
	long long int i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		a[i%5]++;
	//	cout<<a[i%5]<<endl;
	}
	for(i=1;i<=m;i++)
	{
		b[i%5]++;
	//	cout<<b[i%5]<<endl;
	}
	
	s=s+(a[0]*b[0]);
	//cout<<s<<endl;
	for(i=1,j=4;i<=4 && j>=1;i++,j--)
	{
		s=s+(a[i]*b[j]);
	}
	cout<<s;
}
