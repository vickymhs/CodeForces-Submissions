#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,a=0,d=0;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='A')
		a++;
		else
		d++;
	}
	if(a>d)
	cout<<"Anton";
	else if (d>a)
	cout<<"Danik";
	else
	cout<<"Friendship";
}
