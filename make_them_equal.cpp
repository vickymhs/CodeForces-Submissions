#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[100],v1,v2,sum,val,comp;
set<int>s;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	
	if(s.size()==2)
	{
		set<int>:: iterator it=s.begin();
		v1=*it;
		++it;
		v2=*it;
		if((v1+v2)%2 !=0)
			cout<<fabs(v2-v1);
		else
			cout<<fabs(v1-((v1+v2)/2));
		return 0;
	}
	else
	{
		set<int>:: iterator it=s.begin();
		for(it;it!=s.end();it++)
		{
			sum+=*it;
		}
		//cout<<sum<<" \n";
		if(sum%s.size()!=0)
		{
			cout<<-1;
			return 0;
		}
		else
		{
			set<int>:: iterator it=s.begin();
			val=sum/s.size();
			comp=fabs(*it - val);
			++it;
			for(it;it!=s.end();it++)
			{
				//cout<<comp<<" "<<fabs(*it - val)<<" ";
				if(comp != fabs(*it - val) && fabs(*it-val)!=0)
				{
					cout<<-1;
					return 0;
				}
			}
			cout<<comp;
		}
		
	}
}
