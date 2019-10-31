#include<bits/stdc++.h>
using namespace std;
long long n,t,i,c,a,pos=1e9;
int main()
{
	cin>>n>>t;
	for(i=0;i<n;i++)
	{
		cin>>a;
		c=86400-a;
		t=t-c;
		if(t<=0)
		{
			pos=min(pos,i);
		}
		
	}
	cout<<pos+1;
}
