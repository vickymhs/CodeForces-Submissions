#include<bits/stdc++.h>
using namespace std;
int w,h,k,i,j,sum,u,v;
int main()
{
	cin>>w>>h>>k;
	for(i=0;i<k;i++)
	{
		u=h-(4*i);
		v=w-(4*i);
		sum+=(2*(u))+(2*(v-2));
	}
	cout<<sum;
}
