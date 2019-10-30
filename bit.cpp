//bit

#include<iostream>
#include<string>
#include<stdio.h>
 using namespace std;
 
 int main()
 {
 	int n,i,j,x=0;
 	string a[155];
 	
 	cin>>n;
 	
 	for(i=0;i<n;i++)
 	{
	  		cin>>a[i];
	}
 	
 	for(i=0;i<n;i++)
 	{
 		
 			if(a[i]=="X++" || a[i]=="++X")
 			x++;
			
			else
			x--;

	}
	 cout<<x;
 }
