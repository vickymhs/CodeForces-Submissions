#include<bits/stdc++.h>
using namespace std;
int x,hh,mm,c,f,h1,h2,m1,m2;
string h,m;
int main()
{
	cin>>x;
	cin>>h>>m;
	if(h[0]=='7' || h[1]=='7' || m[0]=='7' || m[1]=='7')
	{
		cout<<0;
		return 0;
	}
	else
	{
		hh=(h[0]-'0')*10+h[1]-'0';
		//cout<<hh;
		mm=(m[0]-'0')*10+m[1]-'0';
		//cout<<mm;
		while(f==0)
		{
		
			if(mm==0)
			{
				mm=60;
				if(hh==0)
				hh=24;
				
				hh--;
			}
			if(mm-x < 0)
			{
				mm=60+(mm-x);
				if(hh==0)
				hh=24;
				hh--;
				c++;
				
			}
			else
			{
				mm-=x;
				c++;
			}
			
			
			
			//cout<<hh<<" "<<mm<<endl;
			m1=mm%10;
			m2=(mm/10)%10;
			h1=hh%10;
			h2=(hh/10)%10;
			if(m1==7 || m2==7 || h1==7 || h2==7)
			{
				cout<<c;
				return 0;
			}
		}
	}
}
