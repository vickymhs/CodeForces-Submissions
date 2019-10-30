#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 int main()
 {
 	int c,b,j,k,i,n[101],x;
	char a[101][101];
	cin>>x;
	for(i=0;i<x;i++)
 	scanf("%s",&a[i]);
 	
	 for(i=0;i<x;i++)
	 {
	 		n[i]=strlen(a[i]);
	 }	
	 
	 for(c=0;c<x;c++)
	 {
	 	if(n[c]>10)
	 {	
	 	for(j=1;j<n[c];j++);
	 	
		 cout<<a[c][0]<<j-2<<a[c][j-1]<<"\n";
			
	 }
 	 
 	 else 
 	 {	
		for(k=0;k<n[c];k++)
 	 	cout<<a[c][k];
 	 	cout<<"\n";
 	 }
 }
	
}
 