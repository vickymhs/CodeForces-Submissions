#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int c1,c2,c3,c4,c5,s=0;
	cin>>c1>>c2>>c3>>c4>>c5;
	
	s=c1+c2+c3+c4+c5;
	
	if(s==0)
	cout<<-1;
	
	
	else
	{
		if(s%5==0)
			cout<<s/5;
		else
			cout<<-1;
	}
	
}
