#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	int a,b,c,s[10],i,big;
	cin>>a>>b>>c;
	s[0]=a+(b*c);
	s[1]=a*(b+c);
	s[2]=a*b*c;
	s[3]=(a+b)*c;
	s[4]=a+b+c;
	s[5]=(a*b)+c;
	
	
	big=s[0];
	for(i=0;i<6;i++)
	{
		if(s[i]>big)
		big=s[i];
	}
	
	cout<<big;
}
