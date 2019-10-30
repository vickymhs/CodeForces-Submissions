#include<iostream>
#include<string>

using namespace std;

int main()
{
	string x;
	cin>>x;
	
	if(x=="a8" || x=="a1" || x=="h1" || x=="h8")
	cout<<3;
	
	else if(x[0]=='a' || x[0]== 'h' || x[1]=='1' || x[1]=='8' )
	cout<<5;
	
	else
	cout<<8;
}
