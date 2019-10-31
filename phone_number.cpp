#include<iostream>
#include<stdio.h>
 using namespace std;
 
 int main()
 {
 	int n,a[105],i,b[105],c=0;
 	
 	cin>>n;
 	for(i=0;i<n;i++)
 	cin>>a[i];
 	
 	while(n!=0)
 	{
 		if(n==2)
 		{
 			for(i=0;i<n;i++)
 			cout<<a[i];
		 }
		 
		 else if (n==3)
		 {
		 	for(i=0;i<n;i++)
		 	cout<<a[i];
		 }
		 
		 else if (n>3 && n%2==0)
		 {
		 	for(i=0,c;i<n;i++)
		 	{
		 		if(c%2==0)
		 		{
		 			cout<<a[i]<<"-";
				 }
				 
				 else
				 cout<<a[i];
			 }
			 break;
		 }
		 
		 else if (n>3 && n%3==0)
		 {
		 		for(i=0,c;i<n;i++)
		 	{
		 		if(c%3==0)
		 		{
		 			cout<<a[i]<<"-";
				 }
				 
				 else
				 cout<<a[i];
			 }
			 
			 break;
		 }
		 
		 else
		 {
		 	if (n>3 && n%2 !=0)
		 	{
		 		for(i=0;i<3;i++)
		 		cout<<a[i];
		 		cout<<"-";
		 		n=n-3;
			 }
			 
			 else if(n>3 && n%2 ==0)
			 {
			 	
		 	for(i,c;i<n;i++)
		 	{
		 		if(c%2==0)
		 		{
		 			cout<<a[i]<<"-";
				 }
				 
				 else
				 cout<<a[i];
			 }
			 break;
			 }
		 }
		 
	 }
 	
 }
