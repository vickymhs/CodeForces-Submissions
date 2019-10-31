#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,x,y,o,c,o1,c1;
int main()
{
	cin>>x>>y;
	o=1;
	c=0;
	//x-1 original toys were produced by machine
	if(y==0|| y-x>1)
	{
		cout<<"No";
		return 0;
	}
	if(x==0 && y==1)
	{
		cout<<"Yes";
		return 0;
	}
	c1+=(y-1);
	c=x-c1;
	//cout<<c<<" "<<c1<<endl;
	if(c%2==0 && y>1)
	cout<<"Yes";
	else
	cout<<"No";
}
