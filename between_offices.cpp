#include<bits/stdc++.h>
using namespace std;
long long int x,y,n,i,c;
string s;
int main()
{
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='S' && s[i+1]=='F')
		y++;
		if(s[i]=='F' && s[i+1]=='S')
		x++;
	}
	if(y>x)
	cout<<"YES";
	else
	cout<<"NO";
}
