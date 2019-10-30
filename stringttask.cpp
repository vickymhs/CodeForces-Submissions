#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

using namespace std;

int main()
{
	int i,pos,n,j;
	char a[100],b[100];
	
	gets(a);
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
		{
			pos=i;
			for(j=pos;j<n;j++)
			a[j]=a[j+1];
			
			n--;
			i--;
		}
	}
	

	
	for(i=0;i<n;i++)
	{
		if(isupper(a[i]))
		a[i]=tolower(a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"."<<a[i];
	}
}
