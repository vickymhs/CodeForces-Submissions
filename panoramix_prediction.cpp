#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,m,a[100],y,flag=0,k=0;
	cin>>n>>m;
	y=max(n,m);
	//cout<<y;
	for(i=2,k;i<=y;i++)
	{
		flag=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			//if(flag==1)
		//	break;
		}
		
		if(flag==0)
		{
			a[k]=i;
			k++;
		}
	}
	//cout<<k;
	flag=0;
	for(i=0;i<k;i++)
	{
		if(a[i]==n && a[i+1]==m)
		{
			flag=1;break;
		}
		else
		flag=0;
	}
	
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	
}
