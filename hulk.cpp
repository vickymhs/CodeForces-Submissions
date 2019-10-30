#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,flag=0;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		
		if(i%2!=0)
		cout<<"I hate ";
		
		else
		cout<<"I love ";
		
		if(i==n)
		flag=1;
		else
		cout<<"that ";
	}
	
	if(flag==1)
	cout<<"it ";
}
