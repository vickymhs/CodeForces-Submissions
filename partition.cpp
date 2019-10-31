#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,a[200],cou,sum,sum1;
vector <long long int> b,c;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
			cou++;
	}
	sort(a,a+n);
	if(cou>0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]<0)
			b.push_back(a[i]);
			else
			c.push_back(a[i]);
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			b.push_back(a[i]);
		}
	}
	for(i=0;i<b.size();i++)
	sum=sum+b[i];
	for(i=0;i<c.size();i++)
	sum1=sum1+c[i];
	cout<<fabs(sum-sum1);
}
