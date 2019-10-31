#include<bits/stdc++.h>
using namespace std;
int w,h,u1,d1,u2,d2,i,j,temp;
int main()
{
	cin>>w>>h;
	cin>>u1>>d1;
	cin>>u2>>d2;
	for(i=h;i>0;i--)
	{
		w+=i;
		if(i==d1)
		w-=u1;
		else if(i==d2)
		w-=u2;
		if(w<0)
		w=0;
		//cout<<w<<endl;
	}
	
	cout<<w;
}
