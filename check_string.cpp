#include<bits/stdc++.h>
using namespace std;
long long int a,b,c,i,j,f;
string s;
int main()
{
	cin>>s;
	if(s[0]!='a')
	{
		cout<<"NO";
		return 0;
	}
	a=1;
	for(i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			if(s[i]=='a')
			a++;
			if(s[i]=='b')
			b++;
			if(s[i]=='c')
			c++;
		}
		else
		{
			//cout<<i<<" "<<i+1<<endl;
			if(s[i]=='a' && s[i+1]=='b')
			{
				b++;
			} 
			else if (s[i]=='b' && s[i+1]=='c')
			{
				c++;
			}
			
			else
			{
				//cout<<"here\n";
				f=1;
			}
		}
		if(f==1)
		{
			cout<<"NO";
			return 0;
		}
	}
	//cout<<a<<" "<<b<<" "<<c<<endl;
	if(c==a || c==b && a>0 && b>0)
	cout<<"YES";
	else
	cout<<"NO";
}
