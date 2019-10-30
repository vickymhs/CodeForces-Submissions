#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x,y;
	cin>>x>>y;
	int i,a[105];
	for(i=0;i<x.length();i++)
	{
		if(x[i]==y[i])
		a[i]=0;
		else
		a[i]=1;
	}
	
	for(i=0;i<x.length();i++)
	cout<<a[i];
}
