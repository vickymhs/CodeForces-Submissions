#include<bits/stdc++.h>
using namespace std;
long int a,b,c,d,e,i;
int main()
{
	cin>>a>>b;
	for(i=1;i<=6;i++)
	{
		if(fabs(a-i)<fabs(b-i))
		c++;
		else if (fabs(a-i) > fabs(b-i))
		e++;
		else
		d++;
	}
	
	cout<<c<<" "<<d<<" "<<e;
}

