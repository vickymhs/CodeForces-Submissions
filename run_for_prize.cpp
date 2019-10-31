#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,x,k,c1,c2,y;
vector<long long int>v1,v2;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x<=500000)
		v1.push_back(x);
		else
		v2.push_back(x);
	}
	
	
	if(!v1.empty())
	{
		x=*max_element(v1.begin(),v1.end());
		c1=x-1;
	}
	if(!v2.empty())
	{
		y=*min_element(v2.begin(),v2.end());
		c2=1000000-y;
	}
	
	cout<<max(c1,c2);
}
