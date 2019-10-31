#include<bits/stdc++.h>
using namespace std;
int n,i,j;
vector<int>odd,even;
int main()
{
	cin>>n;
	if(n==1 || n==2)
	{
		cout<<"No";
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(i%2==1)
			odd.push_back(i);
			else
			even.push_back(i);
		}
		cout<<"Yes\n";
		cout<<odd.size()<<" ";
		for(i=0;i<odd.size();i++)
		cout<<odd[i]<<" ";
		cout<<endl<<even.size()<<" ";
		for(i=0;i<even.size();i++)
		cout<<even[i]<<" ";
	}
}
