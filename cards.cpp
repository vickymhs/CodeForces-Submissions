#include<bits/stdc++.h>
using namespace std;
int n,i,a[105],j,x,y,c;
int main()
{
	cin>>n;
	int sum=0,y1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	x=sum/(n/2);
	while(c<n/2)
	{
		i=0;j=0;y=0;
		while(!y)
		{
			if(a[i]!=0)
			y=a[i];
			else
			i++;
		}
		y1=x-y;
		for(j=0;j<n;j++)
		{
			if(y1==a[j] && i!=j)
			{
				c++;
				cout<<i+1<<" "<<j+1<<endl;
				a[i]=0;
				a[j]=0;
				break;
			}
		}
		/*for(j=0;j<n;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
		*/
	}
}
