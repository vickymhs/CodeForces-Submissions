#include<bits/stdc++.h>
using namespace std;
long long int n,a[200],i,x,p1=1e5,p2,y,b,d;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	x=*max_element(a,a+n);
	y=*min_element(a,a+n);
	
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			p1=min(p1,i+1);
		}
		if(y==a[i])
		{
			p2=i+1;
		}
	}
	//cout<<x<<y<<endl;
	//cout<<p1<<p2<<endl;
	
	if(p2<p1)
	cout<<fabs(n-p2)+fabs(1-p1)-1;
	else
	cout<<fabs(n-p2)+fabs(1-p1);
}
