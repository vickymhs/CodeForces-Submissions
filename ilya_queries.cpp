#include<bits/stdc++.h>
using namespace std;
long long int m,n,l,r,i,j,cnt[1000005],x;
string s;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]==s[i+1])
		{
			x++;
		}
		
		cnt[i+1]=x;	
	}
	cin>>m;
	/*for(i=0;i<s.length();i++)
	{
		cout<<i<<" "<<cnt[i]<<endl;
	}*/
	for(i=0;i<m;i++)
	{
		cin>>l>>r;
		//cout<<cnt[r-1]<<" "<<cnt[l-1]<<endl;
		cout<<cnt[r-1]-cnt[l-1]<<endl;
	}
	
}

