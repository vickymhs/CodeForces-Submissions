#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
		long long int d1,d2,d3;
		int s[5];
		
		
		cin>>d1>>d2>>d3;
		s[0]=(d1+d2)*2;
		s[1]=d1+d2+d3;
		s[2]=(d1+d3)*2;
		s[3]=(d2+d3)*2;
		
		cout<<*std::min_element(s,s+4);
}
