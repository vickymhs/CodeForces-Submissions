#include<iostream>
//#include<stdio.h>
#include<string.h>
#include<string>
#include<ctype.h>

using namespace std;

int main()
{
	string a;
	int i,flag=0;
	cin>>a;
	
	for(i=0;i<a.length();i++)
	{
		if(a[i]=='H' || a[i]=='Q'|| a[i]=='9')
		{
			flag=1;
			cout<<"YES";
			break;
		}
	}
	
	if(flag==0)
	cout<<"NO";
}
