#include<bits/stdc++.h>
using namespace std;
string s;
int x,i,j,k,c;
int main()
{
	cin>>s;
	if(s.length()==1)
	c=1;
	else
	{
		
	for(i=0,j=s.length()-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
		c++;
	}
	}
	
	if(s.length()%2==0 && c==0)
	cout<<"NO";
	else
	{
	if(c==1 || c==0)
	cout<<"YES";
	else
	cout<<"NO";
	}
}
