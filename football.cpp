#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	int i,j,k,n,c=0,d=0;
	string a[105],x[105],y[105];
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	if(n==1)
	cout<<a[0];
	
	else
	{
	
	for(i=0,j=0,k=0;i<n;i++)
	{
		if(a[0]==a[i+1])
		{
			
			x[j]=a[i+1];
			a[i+1]="0";
			j++;}
			
		else
		{
		
			y[k]=a[i+1];
			a[i+1]="1";
			k++;
		}
	}
	
	a[0]="0";
	
	for(i=0;i<n;i++)
	{
		if(a[i]=="0")
		c++;
		
		else
		d++;
	}
	
	if(c>d)
	cout<<x[0];
	else
	cout<<y[0];
}
}
