#include<bits/stdc++.h>
using namespace std;
long long int n,f,i,j,a[5005],b[5005];
vector<pair<int,int> >v;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		int c=0,pos;
		f=0;
		pos=a[i];
		//cout<<pos<<" ";
		for(j=0;j<3;j++)
		{
			//cout<<pos<<" ";
			v.push_back(make_pair(pos,a[pos-1]));
			pos=a[pos-1];
			//cout<<pos<<" ";
		}
		//cout<<endl;
	
		if(v[0].first==v[2].second)
		{
			f=1;
			break;
		}
		
		v.clear();
	}
	if(f==1)
	cout<<"YES";
	else
	cout<<"NO";
}
