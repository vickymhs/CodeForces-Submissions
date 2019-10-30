#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int k,r,m,d,i;
	cin>>k>>r;
	for(i=1;i<=10;i++)
	{
		m=k*i;
		d=m%10;
		if(d==r || d==0)
		{
			break;
		}
	}
	
	cout<<i;
	
}
