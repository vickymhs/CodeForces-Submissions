#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,s=0,x,y,i;
	cin>>n>>k;
	x=fabs(240-k);
	for(i=1;i<=n;i++)
	{
		//if(s<x)
		s=s+(5*i);
		if(s>x)
		break;
	}
	
	cout<<i-1;
}
