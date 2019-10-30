#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a[100],i,flag=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	if(n==1)
	{
		if(a[0]==15)
		cout<<"DOWN";
		else if (a[0]==0)
		cout<<"UP";
		else
		cout<<-1;
		exit(0);
	}
	
	
	else
	{
		if(a[n-1]==15)
		{
			cout<<"DOWN";
			exit(0);
		}
		
		else if(a[n-1]==0)
		{
			cout<<"UP";
			exit(0);
		}
		
		else
		{
			for(i=0;i<n-1;i++)
			{
				if(a[i]<a[i+1])
				flag=1;
				else
				flag=0;
				
				//cout<<flag;
			}
		}
		
	}
	
	if(flag==1)
	cout<<"UP";
	else
	cout<<"DOWN";
}
