#include<bits/stdc++.h>
using namespace std;
long long int n,a,b,i,c,d,e;
int main()
{
	c=1e9;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			a=i;
			b=n/i;
			
			if(fabs(b-a)<=c && a<=b)
			{	
			d=a;e=b;
			c=fabs(b-a);
			}
			
			//cout<<a<<" "<<b<<endl;
		}
	}
	
	cout<<d<<" "<<e;
}
