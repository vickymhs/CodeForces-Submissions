#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,flag=0,i;
	cin>>n>>m;
	while(flag==0&&m>0)
	{
		for(i=1;i<=n;i++)
		{
			if(m-i>=0)
			{
				m-=i;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	cout<<m;
}
