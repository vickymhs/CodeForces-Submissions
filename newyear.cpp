#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
	
	char m[100],x[100];
	int i,j,k,l,n;
	
	gets(x);
	j=strlen(x);
	//cout<<x[j-1];
	for(i=j-1,k=0; x[i]!=' ';i--,k++)
	{
		//cout<<x[i];
		m[k]=x[i];
		//cout<<m[k];
	}
//	l=strlen(m);
//	cout<<l;
	//for(k=0;k<5;k++)
	//cout<<m[k];
//	l=strcmp(m,"htnom");
	//n=strcmp(m,"keew");
	//cout<<l;
//	cout<<m[0];
	if(m[0]=='h')
	{
		//cout<<x[0]<<x[1];	
		if(x[0]=='3' && x[1]=='1')
		cout<<7;
		else if(x[0]=='3' && x[1]=='0')
		cout<<11;
		else
		cout<<12;
	}
	
	else if(m[0]=='k')
	{
		//cout<<x[0];
		if(x[0]=='1' || x[0]=='2' || x[0]=='3' || x[0]=='4' || x[0]=='7')
		cout<<52;
		else
		cout<<53;
	}
	
	//else
	//cout<<"bye";
/*	if(x=="31 of month")
	cout<<7;
	else if(x=="30 of month")
	cout<<11;
	else
	cout
	cout<<x;*/
}
