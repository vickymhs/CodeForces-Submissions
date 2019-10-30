#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int x1,x2,y1,y2,a,b;
	cin>>x1>>y1;
	cin>>x2>>y2;
	
	a=fabs(x1-x2);
	b=fabs(y1-y2);
	
	if(a==b)
	cout<<a;
	else
	cout<<max(a,b);
	
}
