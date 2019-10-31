#include<bits/stdc++.h>
using namespace std;
int i,j,k,n,pos,v1,v2;
vector<int>v;
int main()
{
	cin>>n;
	pos=sqrt(n);
	v1=pos*pos;
	v2=(pos+1)*(pos+1);
	if(fabs(n-v1)==0)
	{
		cout<<2*pos;
		return 0;
	}
	if(fabs(n-v1)<fabs(n-v2))
	{
		cout<<(2*pos)+1;
	}
	else
	cout<<2*(pos+1);
	
}
