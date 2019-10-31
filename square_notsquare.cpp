#include<bits/stdc++.h>
using namespace std;
set<long long> s;
int n,i,j,x,y,z,a[200010],sq,w,nsq;
long long c;

vector<int> make, makenot;
int main()
{
	ios::sync_with_stdio(false);
	 cin.tie(0);
	set<long long> :: iterator it;
	cin>>n;
	for(i=0;i<31650;i++)
	{
		s.insert(i*i);
	}
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(s.find(a[i])!=s.end())
		{	
			//cout<<a[i]<<endl;
			sq++;
			if(a[i]==0)
			{
				makenot.push_back(2);
			}
			else
				makenot.push_back(1);
		}
		else
		{
			nsq++;
			it=lower_bound(s.begin(),s.end(),a[i]);
			
			x= *(it)-a[i];
			it--;
			w= a[i]-*(it);
			make.push_back(min(x,w));
		}
	}
	sort(make.begin(), make.end());
	sort(makenot.begin(),makenot.end());
	
	//cout<<sq<<" "<<nsq<<endl;
	if(sq==n/2)
	{
		cout<<0;
		return 0;
	}
	else if(sq<n/2)
	{
		for(i=0;i<(nsq-sq)/2;i++)
		{
			//cout<<make[i]<<endl;
			c=c+make[i];
			//cout<<c;
		}
	}
	else 
	{
		for(i=0;i<(sq-nsq)/2;i++)
		{
			//cout<<makenot[i]<<endl;
			c=c+makenot[i];
			//cout<<c;
		}
	}
	cout<<c;
	return 0;
}
