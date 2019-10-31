// letters
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char a[55][55];
	int i,j,n,m,r=0,c=0,x=0,pos,pos1;
	
	cin>>n>>m;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>a[i][j];
	}
	
	
	for(j=0;j<m;j++)
	{
		if(a[0][j]== '*')
		c++;
		
		if(c==1)
		pos=j;
	}
	
	cout<<pos<<"\n";
	
	if(c>0)
	r++;
	
	for(i=1;i<n;i++)
	{x=0;
		for(j=0;j<m;j++)
		{
			if(a[i][j]=='*')
			{
				x++;
			}
			
			if(x==1)
			pos1=j;
		}
		
		if(x>=1)
		{
			r++;
		}
		
		if(x>c)
		c=x;
		
		if(pos1<pos)
		pos=pos1;
	}
	
	cout<<r<<c<<pos<<"\n";
	
	for(i=0;i<r;i++)
	{
		for(j=pos;j<c;j++)
		cout<<a[i][j];
		
		cout<<"\n";
	}
}
