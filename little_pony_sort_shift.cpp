#include<bits/stdc++.h>
using namespace std;;
int n,i,a[100005],j,c,s,f;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n-1;i++)
	{
		if(a[i]<=a[i+1])
		continue;
		else
		{
			c=0;
			for(j=i+1;j<n-1;j++)
			{
				if(a[j]<=a[j+1])
				c++;
				else
				{
					f=1;
					break;
				}
			}
			
			//break;
			if(j==n-1 && f==0)
			{
				if(a[j]<=a[0])
				{
					c++;
					cout<<c;
					return 0;
				}
				else
				{
					cout<<-1;
					return 0;
				}
			}
		}
	}
	if(f==1)
	cout<<-1;
	else
	{
		cout<<c;
	}
}
