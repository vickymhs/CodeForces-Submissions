#include<bits/stdc++.h>
using namespace std;
long long int s,v1,v2,t1,t2,x,y,i,j;
int main()
{
	cin>>s>>v1>>v2>>t1>>t2;
	x= (s*v1)+(2*t1);
	y= (s*v2)+(2*t2);
	//cout<<x<<" "<<y;
	if(x<y)
		cout<<"First";
	else if(x>y)
	cout<<"Second";
	else
	cout<<"Friendship";
}
