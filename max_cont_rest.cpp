	#include<bits/stdc++.h>
	using namespace std;
	long long int x,n,i,j,maxi=-1,c;
	string s,temp;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			s+=x+'0';
		}
		s+=s;
		//cout<<s;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				c++;
			}
			else
			{
				maxi=max(maxi,c);
				c=0;
			}
		}
		cout<<maxi;
		return 0;
	}
