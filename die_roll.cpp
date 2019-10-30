#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y,w,d,c=0,i;
	cin>>y>>w;
	i=max(y,w);
	for(int j=i;j<=6;j++)
	c++;
	
	switch(c)
	{
		case 1:cout<<"1/6";
		break;
		case 2:cout<<"1/3";
		break;
		case 3:cout<<"1/2";
		break;
		case 4:cout<<"2/3";
		break;
		case 5:cout<<"5/6";
		break;
		case 6:cout<<"1/1";
		break;
		default:cout<<"0";
		break;
	}
}
