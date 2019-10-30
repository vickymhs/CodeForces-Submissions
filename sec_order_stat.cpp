//second order statistics

#include<iostream>

using namespace std;

int main()
{
	int n,a[105],i,j,t,flag=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i];
	
	if(n==1)
	cout<<"NO";
	
	else
	{
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
		
	//	for(int k=0;k<n;k++)
	//cout<<a[k];
	//cout<<endl;
	}
	

	
	
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			flag=1;
			break;
		}
		
		else
		flag=0;
	}
	if(flag==1)
	cout<<a[i+1];
	else
	cout<<"NO";
	}
	
	
}
