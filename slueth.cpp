#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
	char a[110];
	gets(a);
	
	int x,flag=0;
	x=strlen(a);
//	cout<<x;
	
	for(int i=0;i<x;i++)
	a[i]=tolower(a[i]);
	
	for(int i=x-1;i>=0;i--)
	{
		//cout<<a[i]<<endl;
		if(isalpha(a[i]))
		{
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
				break;
			}
		}
		
	}
	
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
}
