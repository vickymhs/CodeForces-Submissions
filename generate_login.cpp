	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,c,k;
	string s,t;
	char ch;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>s>>t;
		ch=t[0];
		cout<<s[0];
		for(i=1;i<s.length();i++)
		{
			if(s[i]<ch)
				cout<<s[i];
			else
				break;
		}
		cout<<ch;
		return 0;
	}
