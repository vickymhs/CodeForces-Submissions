#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a[100005],i,n,m,s,pos;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	m=*max_element(a,a+n);
	s=*min_element(a,a+n);
	pos=max_element(a,a+n)-a;
	
	//cout<<pos<<endl;
	if(m==1)
	{
		a[pos]=2;
	}
	else
	{
		if(s==1)
	{
		a[pos]=s;
		//cout<<a[pos];
	}
	else
	{
		a[pos]=1;
		//cout<<a[pos];
	}
	}
	
	
	sort(a,a+n);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
