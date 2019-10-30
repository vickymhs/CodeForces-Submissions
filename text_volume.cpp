#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,c,k;
string s;
int main()
{
	cin>>n;
	cin.ignore();
	getline(cin,s);
	for(i=0;i<s.length();i++)
	{
		
		
			if(isupper(s[i]))
			c++;
		
		
		if(s[i]==' ' || s[i+1]=='\0')
		{
			k=max(k,c);
			c=0;
		}
		
	}
	
	//cout<<s<<endl;
	cout<<k;
}
