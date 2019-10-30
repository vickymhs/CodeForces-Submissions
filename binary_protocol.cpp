#include<bits/stdc++.h>
using namespace std;
string s;
long int n,x,y,i,j,c;
int main()
{
	cin>>n;
	cin>>s;
	c=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			c++;
			x=1;
		}
		
		else
		{
			cout<<c;
			c=0;
			x=0;
			
			if(s[i+1]==0)
			{
				cout<<"0";
				c=0;
			}
		}
	}
	if(x==1)
	cout<<c;
	else
	exit(0);
}
