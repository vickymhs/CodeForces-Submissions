#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
		i=i+2;
		else if(s[i]=='1'&&s[i+1]=='4')
		i=i+1;
		else if(s[i]=='1')
		continue;
		else
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	
}
