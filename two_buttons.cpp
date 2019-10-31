#include<bits/stdc++.h>
using namespace std;
long long int a[10004],b[100004],n,m,i,j,x;
int main()
{
	queue <int> q;
	cin>>n>>m;
	q.push(n);
	a[n]=1;//to check whether the button is visited or not
	b[n]=0;//to maintain a count for number of presses made
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		if(x==m)
		break;
		else
		{
			if(x-1>=0)
			{
				if(a[x-1]==0)
				{	
				a[x-1]=1;
				b[x-1]=b[x]+1;
				q.push(x-1);
				}
			}
			if(2*x<=10000)
			{
				if(a[2*x]==0)
				{	
				a[2*x]=1;
				b[2*x]=b[x]+1;
				q.push(2*x);
				}
			}
			
		}
		
	}
	cout<<b[x];
}
