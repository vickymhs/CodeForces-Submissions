#include<bits/stdc++.h>

using namespace std;
int main()
{
	long int n,m,c=0;
	cin>>n>>m;
	
	for(int i=0;i<=33;i++)
	{
		for(int j=0;j<=33;j++)
		if(i*i+j==n && i+j*j==m)
		c++;
	}
	
	cout<<c;
}
