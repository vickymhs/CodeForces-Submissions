#include<bits/stdc++.h>
using namespace std;
long int n,i,j,a[100005],spos,epos,ao,sc,f;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	spos=0;
	epos=-1;
	sc=0;
	ao=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1] && sc==0)
		{
			spos=i;
			sc=1;
			ao=1;
		}
		if(a[i]<a[i+1] && sc==1)
		{
			epos=i;
			sc=0;
		}
		//cout<<spos<<" "<<epos<<endl;
	}
	//cout<<spos<<" "<<epos<<endl;
	if(epos==-1 && ao==1)
	epos=n-1;
	
	else if(epos==-1)
	epos=spos;
	
	sort(a+spos, a+epos+1);
	/*for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;*/
	for(i=0;i<n-1;i++)
	{
		//cout<<a[i]<<" ";
		if(a[i]>a[i+1])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		cout<<"yes \n"<<spos+1<<" "<<epos+1;
	}
	else
	cout<<"no";
	//cout<<spos<<" "<<epos<<endl;
}
