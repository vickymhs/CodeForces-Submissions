#include<iostream>

using namespace std;

int main()
{
	int n,m,i,j,flag=0;
	char a[105][105];
	cin>>n>>m;
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		break;
	}
	
	if(flag==1)
	cout<<"#Color";
	
	else
	cout<<"#Black&White";
}
