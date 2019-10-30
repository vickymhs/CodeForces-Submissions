#include<bits/stdc++.h>
using namespace std;
int x,y;
int main()
{
	string a,b;
	
	cin>>a>>b;
	if(a=="sunday")
	x=0;
	else if(a=="monday")
	x=1;
	else if(a=="tuesday")
	x=2;
	else if(a=="wednesday")
	x=3;
	else if(a=="thursday")
	x=4;
	else if(a=="friday")
	x=5;
	else if(a=="saturday")
	x=6;
	
	if(b=="sunday")
	y=0;
	else if(b=="monday")
	y=1;
	else if(b=="tuesday")
	y=2;
	else if(b=="wednesday")
	y=3;
	else if(b=="thursday")
	y=4;
	else if(b=="friday")
	y=5;
	else if(b=="saturday")
	y=6;
	
	if((x+31)%7 == y || (x+30) % 7 ==y || (x+28)%7 ==y)
	cout<<"YES";
	else
	cout<<"NO";	
	
}
