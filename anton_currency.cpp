#include<bits/stdc++.h>
using namespace std;
string s;
int ce,co,i,j,pos,k;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		//cout<<s[i]-'0';
		j=s[i]-'0';
		if(j%2==0)
		{
			ce++;
			pos=i;
		}
		else
		co++;
	}
	
	//cout<<pos<<endl;
	if(ce==0)
	{
		cout<<-1;
		return 0;
	}
	else
	{
		j=s[s.length()-1]-'0';
		for(i=0;i<s.length()-1;i++)
		{
			k=s[i]-'0';
			//cout<<j<<" "<<k<<endl;
			if(k%2==0)
			{
				
				if(j>k)
				{
					swap(s[i],s[s.length()-1]);
					break;
				}
				
				else
				ce--;
			}
			
			//cout<<s<<endl;
		}
		if(ce==0)
		swap(s[pos],s[s.length()-1]);
	}
	cout<<s;
	//cout<<ce<<" "<<co;
}
