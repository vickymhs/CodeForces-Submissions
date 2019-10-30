// team

#include<iostream>

using namespace std;

int main()
{
	int n,s=0,c=0,i,j;
	int a[1000][3];
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		cin>>a[i][j];
	}
	
	for(i=0;i<n;i++)
	{s=0;
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
		
		if(s>=2)
		c++;
}

cout<<c;
}
