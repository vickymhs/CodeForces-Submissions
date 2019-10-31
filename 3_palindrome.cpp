#include<bits/stdc++.h>
using namespace std;
string s;
int i,j,n;
int main()
{
	while(s.length()<=200005)
	{
		if(i%2==0)
		s+="aa";
		else
		s+="bb";
		i++;
	}
	cin>>n;
	for(i=0;i<n;i++)
	cout<<s[i];
}
