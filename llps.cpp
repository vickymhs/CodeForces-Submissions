	#include<bits/stdc++.h>
	using namespace std;
	long long int n,a[26],i,c=0,v=-1;
	string s;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			a[s[i]-'a']++;
		}
		for(i=0;i<26;i++)
		{

			if(i>v &&a[i]!=0)
			{
				v=i;
				c=a[i];
			}
		}

		for(i=0;i<c;i++)
			cout<<char('a'+v);
		return 0;
	}
