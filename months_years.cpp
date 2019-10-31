#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,u,s3,s4;
char c1,c2;
int n,x,i,j;
int main()
{
	cin>>n;
	s1="312831303130313130313031";
	s1+=s1+s1+s1;
	//cout<<s1<<endl;
	s2="312931303130313130313031";
	//s2+=s2+s2+s2;
	s3+=s1+s2+s1;
	s4+=s2+s1+s1;
	for(i=0;i<n;i++)
	{
		cin>>x;
		c1='0'+(x%10);
		x=x/10;
		c2='0'+ (x%10);
		s=s+c2+c1;
	}
	//cout<<s<<endl;
	j=s.length();
	for(i=0;i<s1.length();i++)
	{
		u=s1.substr(i,s.length());
		if(u==s)
		{
			cout<<"Yes";
			return 0;
		}
	}
	/*for(i=0;i<s2.length();i++)
	{
		u=s2.substr(i,s.length());
		if(u==s)
		{
			cout<<"Yes";
			return 0;
		}
	}*/
	for(i=0;i<s3.length();i++)
	{
		u=s3.substr(i,s.length());
		if(u==s)
		{
			cout<<"Yes";
			return 0;
		}
	}
	for(i=0;i<s4.length();i++)
	{
		u=s4.substr(i,s.length());
		if(u==s)
		{
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
}
