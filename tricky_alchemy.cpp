#include<bits/stdc++.h>
using namespace std;
long long int a,b,x,y,z,cy,cb,s;
int main()
{
	cin>>a>>b;
	cin>>x>>y>>z;
	cy=cy+(x*2)+(y);
	cb=cb+(z*3)+y;
	
	//cout<<cy<<" "<<cb<<endl;
	if(cy>=a)
	s=s+(cy-a);
	else
	s+=0;
	
	if(cb>=b)
	s=s+(cb-b);
	else
	s+=0;
	
	cout<<s;
}
