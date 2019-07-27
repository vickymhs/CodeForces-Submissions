#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[200005],c,f;
vector<int>inc,decr;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	c=1;i=n-1;
	decr.push_back(a[i]);
	i--;
	while(i>=0)
	{
		if(a[i]==a[i+1])
		{
			c++;
			//decr.push_back(a[i]);
			inc.push_back(a[i]);
			i--;
		}
		else
		{
			decr.push_back(a[i]);
			i--;
			c=1;
		}
		if(c==3)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES\n";
		sort(inc.begin(),inc.end());
		cout<<inc.size()<<endl;
		for(i=0;i<inc.size();i++)
		cout<<inc[i]<<" ";
		cout<<endl;
		cout<<decr.size()<<endl;
		for(i=0;i<decr.size();i++)
		cout<<decr[i]<<" ";
		
	}
}
