#include<bits/stdc++.h>
using namespace std;
long long int a1,a2,x,y,j,i;
int main()
{
	cin>>a1>>a2;
	/*x=min(a1,a2);
	if(x==a2)
	{
		j=a2;
		a2=a1;
		a1=j;
	}*/	
	while(a1>0 && a2>0 && (a1>1 || a2>1))
	{
		
		if(a1<a2) 
		{
			a1++;
			a2-=2;
			i++;
			//cout<<a1<<" "<<a2<<endl;
		}
		else 
		{	
			a1-=2;
			a2++;
			i++;
			//cout<<a1<<" "<<a2<<endl;
		}
	}
	cout<<i;
}
