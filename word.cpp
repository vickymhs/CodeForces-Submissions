#include<iostream>
#include<stdio.h>
#include<ctype.h>


using namespace std;

int main()
{
	int i,u=0,l=0;
	char a[100];
	
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(isupper (a[i]))
			u++;
		else if(islower (a[i]))
			l++;
	}
	
	if(u>l)
	{
		for(i=0;a[i]!='\0';i++)
		a[i]=toupper(a[i]);
		puts(a);
	}
	
	else 
	{
		for(i=0;a[i]!='\0';i++)
		a[i]=tolower(a[i]);
		puts(a);
	}
	
}

