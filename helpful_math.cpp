#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
using namespace std;

int main()
{
	char a[100],b[100];
	int i,j,k,t,c;
	
	gets(a);
	c=strlen(a);
	
	for(i=0,j=-1;i<c;i++)
	{
		if(isdigit(a[i]))
	{	++j;
		b[j]=int(a[i]);
		
	}
	}
	
	for(i=0;i<j;i++)
	{
		for(k=0;k<j;k++)
		{
			if(b[k+1]<b[k])
				{
					t=int(b[k]);
					b[k]=b[k+1];
					b[k+1]=t;
				}
		}
	}
	
	for(i=0;i<=j;i++)
	{
		cout<<int(b[i])-48;
		if(i<=j-1)
		cout<<"+";
	}
}
