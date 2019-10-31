#include<bits/stdc++.h>
using namespace std;
long long int n,i,c,d,j;
string s;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		//cout<<i<<endl;
		if(s[i]=='A' && s[i+1]=='B')
		{
			c=0;d=0;
			c++;
			for(j=i+2;j<s.length();j++)
			{		
				if(s[j]=='B' && s[j+1]=='A')
				{
					d++;
					break;
				}
			}
			//cout<<c<<" "<<d<<endl;
			if(c>0 && d>0 && c==d)
			break;
		}
		else if(s[i]=='B' && s[i+1]=='A')
		{
			c=0;d=0;
			d++;
			for(j=i+2;j<s.length();j++)
			{
				if(s[j]=='A' && s[j+1]=='B')
				{
					c++;
					break;
				}
			}
			//cout<<c<<" "<<d<<endl;
			if(c>0 && d>0 && c==d)
			break;
		}
	}
	
	if(c>0 && d>0 && c==d)
	cout<<"YES";
	else
	cout<<"NO";
}
