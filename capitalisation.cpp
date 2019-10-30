#include<iostream>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
	char a[1000];	
	gets(a);
	a[0]=toupper(a[0]);
	
	puts(a);	
}
