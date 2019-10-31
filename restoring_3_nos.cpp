#include<bits/stdc++.h>
using namespace std;
int x,y,z,w,a,b,c,arr[4];
int main()
{
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+4);
	x=arr[0];
	y=arr[1];
	z=arr[2];
	w=arr[3];
	//cin>>x>>y>>z>>w;
	b=(x-y+z)/2;
	a=(y-z+x)/2;
	c=w-b-a;
	cout<<a<<" "<<b<<" "<<c;
}
