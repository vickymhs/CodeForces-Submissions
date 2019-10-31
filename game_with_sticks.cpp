#include<bits/stdc++.h>
using namespace std;
long int n,m,i,j,k,c,a[1000][1000];
int main()
{
	cin>>n>>m;
	k=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			a[i][j]=k;
			k++;
		}
	}
	i=0;j=0;k=0;
	while(i<n && j<m)
	{
		for(k=i;k<n;k++)
		a[k][j]=0;
		for(k=j;k<m;k++)
		a[i][k]=0;
		
		c++;i++;j++;
	}
	if(c%2==1)
	cout<<"Akshat";
	else
	cout<<"Malvika";
}
