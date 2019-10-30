#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
	string x[1005];
	int pos,c=0,i,j,n,flag=0,c1,c2;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(x[i][0]=='O' && x[i][1]=='O')
		{
			c++;
			pos=i;
			c1=0;
			c2=1;
		}
		else if(x[i][3]=='O' && x[i][4]=='O')
		{
			c++;
			pos=i;
			c1=3;
			c2=4;
		}
		
		if(c>=1)
		{
			flag=1;
			break;
		}
	}
	x[pos][c1]='+';
	x[pos][c2]='+';
	
	if(flag==0)
	cout<<"NO";
	
	else
	{
		cout<<"YES"<<"\n";
		for(i=0;i<n;i++)
		{
			cout<<x[i];
			cout<<"\n";
		}
	}
		
}
