#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,k,s,a[1000005],o,t;
//string s;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		o++;
		else
		t++;
	}
	if(t<=o)
	{
		s=s+t;
		o=o-t;
		s=s+(o/3);
	}
	else
	{
		s=s+o;
		t=t-o;
	}
	cout<<s;
}
