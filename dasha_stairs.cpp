#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,x;
	cin>>a>>b;
	if(a==0 && b==0)
	cout<<"NO";
	else
	{
		x=fabs(a-b);
	if(x>1)
	cout<<"NO";
	else
	cout<<"YES";
	}
	
	
}
