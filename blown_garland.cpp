#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i,j,n,r,g,b,y,r1=0,g1=0,y1=0,b1=0;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='R')
		r=i%4;
		else if(s[i]=='G')
		g=i%4;
		else if(s[i]=='B')
		b=i%4;
		else if(s[i]=='Y')
		y=i%4;
	}
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='!')
		{
			if(i%4==r)
			r1++;
			else if(i%4==g)
			g1++;
			else if(i%4==y)
			y1++;
			else if (i%4==b)
			b1++;
		}
	}
	cout<<r1<<" "<<b1<<" "<<y1<<" "<<g1;

}
