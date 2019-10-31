#include<bits/stdc++.h>
using namespace std;
long double r,x1,y11,x2,y2,d;
int main()
{
	cin>>r>>x1>>y11>>x2>>y2;
	d=sqrt(pow(x2-x1 , 2)+ pow(y2-y11 , 2));
	//cout<<d<<endl;
	cout<<ceil( (d)/(2*r));
}
