#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
	char a[101],b[101];
	gets(a);
	gets(b);
	strrev(a);
	
	if(strcmp (a,b)==0)
	cout<<"YES";
	else
	cout<<"NO";
}
