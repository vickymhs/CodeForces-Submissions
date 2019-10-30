#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	long double n;
	cin>>n;
	
	if(n>=0 && n<=127)
	cout<<"byte";
	
	else if (n>127 && n<=32767)
	cout<<"short";
	
	else if(n>32767 && n<=2147483647)
	cout<<"int";
	
	else if(n>2147483647 && n<=9223372036854775807)
	cout<<"long";
	
	else if(n>9223372036854775807)
	cout<<"BigInteger";
}
