#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x[105],y[105],sx=0,sy=0,c=0,flag=0,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		sx+=x[i];
		sy+=y[i];
	}
//	cout<<sx<<endl<<sy;
	if(sx%2==0 && sy%2==0)
	cout<<0;
	else
	{
		for(i=0;i<n;i++)
		{
			sx=sx-x[i];
			sy=sy-y[i];
			swap(x[i],y[i]);
			sx+=x[i];
			sy+=y[i];
			//c++;
			if(sx%2==0 && sy%2==0)
			{
				flag=1;
				c++;
				break;
			}
		}
		
		if(flag==1)
		cout<<c;
		else
		cout<<-1;
	}
}

