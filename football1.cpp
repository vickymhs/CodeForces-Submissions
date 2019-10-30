// football

#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;



int main()
{
	char a[150];
	int b[150]={1},s;
	gets(a);
	int i,j;
	j=strlen(a);
	
	for(i=0;i<j-1;i++)
	{
		if(a[i]==a[i+1])
		{
			b[i+1]=b[i]+1;
			
			/*if(c>=6)
			{
				cout<<"YES";
				break;
			}
			
		}
		
		else
		c=0;*/		
		
		}
		
		else
		b[i+1]=1;
//	cout<<b[i+1]<<endl;
	//if(c<7)
	//cout<<"NO";
	}
	s=*max_element(b,b+j);
	if(s>=7)
	cout<<"YES";
	else
	cout<<"NO";
}
