#include<bits/stdc++.h>
using namespace std;
int n,x,y,i,j,c;
string s;
vector<pair<int,int> >v;
int main()
{
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='U')
		x++;
		else
		y++;
		v.push_back(make_pair(x,y));
	}
	for(i=0;i<v.size()-1;i++)
	{
		//cout<<v[i].first<<" "<<v[i].second<<endl;
		if(v[i].first==v[i].second)
		{
			if(v[i-1].first<v[i].first && v[i+1].first>v[i].first)
			c++;
			if(v[i-1].second<v[i].second && v[i+1].second>v[i].second)
			c++;
		}
		//cout<<c<<endl;
	}
	cout<<c;
}
