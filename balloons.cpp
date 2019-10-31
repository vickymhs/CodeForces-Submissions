#include<bits/stdc++.h>
using namespace std;
int n,i,a[1005],s1,s2;
vector<pair<int,int> >v;
vector<int>g,p;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		v.push_back(make_pair(a[i],i));
	}
	sort(v.begin(),v.end());
	s1=v[0].first;
	g.push_back(v[0].second);
	for(i=1;i<v.size();i++)
	{
		s2+=v[i].first;
		p.push_back(v[i].second);
	}
	if(p.size()==0)
	{
		cout<<-1;
	}
	else if(s2==s1)
	{
		cout<<-1;
	}
	else
	{
		cout<<g.size()<<endl;
		for(i=0;i<g.size();i++)
		cout<<g[i]<<" ";
	}
}
