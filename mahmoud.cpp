#include<bits/stdc++.h>
using namespace std;
string a,b;
long long int x,y;
int main()
{
	cin>>a>>b;
	if(a==b)
	{
		cout<<-1;
		exit(0);
	}
	else
	{
		if(b.length()>a.length())
		cout<<b.length();
		else
		cout<<a.length();
	}
}
