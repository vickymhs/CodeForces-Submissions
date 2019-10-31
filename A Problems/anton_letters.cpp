#include<iostream>
#include<ctype.h>
#include<string.h>

using namespace std;

int main()
{
	int a[26],i,c=0;
	string x;
	getline(cin,x);
	
	for(i=0;i<26;i++)
	a[i]=0;
	//cout<<int(x[0]);
	for(i=0;i<x.length();i++)
	{
		if(isalpha(x[i]))
		{
			a[int(x[i])-97]++;
		}
	}
	
	for(i=0;i<26;i++)
	{
		if(a[i]>0)
		c++;
	}
	
	cout<<c;
	//cout<<x;
	
}
