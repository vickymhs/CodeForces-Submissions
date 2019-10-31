#include<bits/stdc++.h>
using namespace std;
long long int n,i,c;
string s,a;
int main()
{
	cin>>n;
	cin>>s;
	for(i=0;i<s.length()-2;i++)
	{
		a=s.substr(i,3);
		if(a=="xxx")
		{
			s.erase(i,1);
			i--;
			c++;
		}
	}
	//cout<<s<<endl;
	cout<<c;
}

