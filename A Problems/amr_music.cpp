#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,i,s=0,j;
	cin>>n>>k;
	vector<pair<int,int> > v(n+1);
	for(i=1;i<=n;i++)
	{
		cin>>v[i].first;
		v[i].second=i;
	}
	sort(v.begin(), v.end());
	//for(i=1;i<=n;i++)
	//{
	//	cout<<v[i].first<<" ";
	//}
	//cout<<endl;
	if(v[1].first>k)
	{
		cout<<0;
		exit(0);
	}
	
	else
	{
	for(i=1;i<=n;i++)
	{
		s=s+v[i].first;
		if(s<=k)
		{
			j=i;
		}
		
	}
	}
	cout<<j<<endl;
	for(i=1;i<=j;i++)
	{
		cout<<v[i].second<<" ";
	}
}
