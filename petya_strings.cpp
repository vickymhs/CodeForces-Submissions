// petya and strings

#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>

using namespace std;

int main()
{
	int i;
	char a[101],b[101];
	gets(a);
	gets(b);
	
	for(i=0;i<strlen(a);i++)
	a[i]=tolower(a[i]);

	for(i=0;i<strlen(b);i++)
	b[i]=tolower(b[i]);
	
	
	if(strcmp(a,b)==0)
	cout<<0;
	
	else if (strcmp(a,b)>0)
	cout<<1;
	
	else
	cout<<-1;
}
