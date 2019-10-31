#include<bits/stdc++.h>
using namespace std;
int a,b,c,i,j;
int main()
{
	cin>>a>>b>>c;
	if(a+b<=c)
		j=j+(c-a-b)+1;
	if(b+c<=a)
		j+=(a-b-c)+1;
	if(c+a<=b)
		j+=(b-a-c)+1;
	cout<<j;
}

