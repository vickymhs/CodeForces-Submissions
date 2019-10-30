#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	int i,pos,n,c,j,k;
	char a[100];
	
	gets(a);
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				pos=j;
				for(k=pos;k<n;k++)
				a[k]=a[k+1];
				
				n--;
				j--;
			}
		}
	}
	
	
	
	c=strlen(a);
	
	if(c%2==0)
	cout<<"CHAT WITH HER!";
	
	else
	cout<<"IGNORE HIM!";
	
}
