#include<iostream>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
	int i,j=0,n;
	char a[100],b[26]={0};
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		a[i]=tolower(a[i]);
	}
	
	for(i=0;i<n;i++)
	b[int(a[i])-97]++;
	
	for(i=0;i<26;i++)
	{
		if(b[i]==0)
		{
			
			j=1;
			break;
		}
		
		else
		j=0;
	}
	
	if(j==0)
	cout<<"YES";
	else
	cout<<"NO";
	
}
