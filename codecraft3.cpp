//codecraft
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int s,k;
	string a;
	cin>>a;
	cin>>k;
	
	if(a=="January")
		s=1;
	else if(a=="February")
		s=2;
	else if(a=="March")
		s=3;
	else if(a=="April")
		s=4;
	else if (a=="May")
		s=5;
	else if(a=="June")
		s=6;
	else if(a=="July")
		s=7;
	else if(a=="August")
		s=8;
	else if(a=="September")
		s=9;
	else if(a=="october")
		s=10;
	else if(a=="November")
		s=11;
	else
		s=12;
		
//	cout<<s<<endl;
	s=s+k;
	if(s>12)
	s=s-12;
	
	s=s%12;
	
	switch(s)
	{
		case 1: cout<<"January";
				break;
		case 2: cout<<"February";
				break;
		case 3: cout<<"March";
				break;
		case 4: cout<<"April";
				break;
		case 5: cout<<"May";
				break;
		case 6: cout<<"June";
				break;
		case 7: cout<<"July";
				break;
		case 8: cout<<"August";
				break;
		case 9: cout<<"September";
				break;
		case 10: cout<<"October";
				break;
		case 11: cout<<"November";
				break;
		case 0: cout<<"December";
				break;
		default:break;
	}

}
