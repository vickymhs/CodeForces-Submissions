#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,c=1,k;
string x,y,s;
int solve(string x)
{
	int sum=0,i=0,j=0;
	cout<<"string entered is "<<x<<endl;
	while(i<x.length())
	{
		sum=sum+int(x[i])-48;
		i++;	
	}
	cout<<sum<<endl;
	while(sum>0)
	{
		//cout<<char((sum%10)+48)<<endl;
		y[j]=char((sum%10)+48);
		//cout<<y[j];
		sum=sum/10;
		j++;
	}
	cout<<"string is "<<y<<endl;
	/*for(i=0;i<j;i++)
	{
		cout<<y[i];
	}*/
	cout<<endl;
	if(j>1)
	{
		c=c+solve(y);
	}
	else
		return c;
}
int main()
{
	cin>>s;
	cout<<solve(s);
}
