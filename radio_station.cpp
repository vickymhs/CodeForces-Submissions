#include<bits/stdc++.h>
using namespace std;
vector< pair <string,string> > v;
long long int j,n,m,i;
string s1,s2,s3;
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s1>>s2;
		v.push_back(make_pair(s1,s2));
	}
	//for(i=0;i<v.size();i++)
	//cout<<v[i].first<<" "<<v[i].second<<endl;
	for(i=0;i<m;i++)
	{
		cin>>s1>>s2;
		s3=s2.substr(0,s2.length()-1);
		//cout<<s3<<endl;
		for(j=0;j<n;j++)
		{
			//cout<<v[j].second<<" ";
			if(v[j].second == s3)
			{
				cout<<s1<<" "<<s2<<" #"<<v[j].first<<endl;
				break;
			}
		}
	}
}
