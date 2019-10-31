#include<bits/stdc++.h>
using namespace std;
string s,temp;
int f,r,i,j,c;
int main()
{
	cin>>s;
	if(s.length()==1 || s.length()==2)
	{
		cout<<s;
		return 0;
	}
	else
	{
		f=0;r=s.length()-1;
		if(s.length()%2 ==0)
		{
			while(c<s.length())
			{
				if(c%2==0)
				{
					temp+=s[r];
					r--;
				}
				else
				{
					temp+=s[f];
					f++;
				}
				c++;
			}
		}
		else
		{
			while(c<s.length())
			{
				if(c%2==0)
				{
					temp+=s[f];
					f++;
				}
				else
				{
					temp+=s[r];
					r--;
				}
				c++;
			}
		}
	}
	for(i=temp.length()-1;i>=0;i--)
	cout<<temp[i];
	return 0;
}
