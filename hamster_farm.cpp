#include<bits/stdc++.h>
using namespace std;
long long int n,k,a[1000005],i,j,c,r,mini=1e18,pos;
int main()
{
	cin>>n>>k;
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<k;i++)
	{
		r=n%a[i];
		//cout<<r<<" ";
		if(r<mini)
		{
			mini=r;
			pos=i;
		}
	}
	//cout<<endl;
	cout<<pos+1<<" "<<n/a[pos];
}
