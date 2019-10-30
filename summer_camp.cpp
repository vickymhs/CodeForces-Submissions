#include<bits/stdc++.h>
using namespace std;
long int a[1005],n,i,x,d,j=1;
int main()
{
	cin>>n;
	for(i=1;i<=370;i++)
	{
		x=i;
		if(x<10)
		{
			while(x>0)
			{
			d=x%10;
			a[j]=d;
			//cout<<a[j];
			j++;
			x=x/10;
			}
		}
		else if(x>=10 && x<=99)
		{
				a[j]=x/10;
				x=x%10;
				j++;
				a[j]=x;
				j++;
				//x=x/10;	
		}
		else
		{
			a[j]=x/100;
			x=x%100;
			j++;
			a[j]=x/10;
			x=x%10;
			j++;
			a[j]=x;
			j++;
		}
		
	}
	//cout<<j<<endl;
	//for(i=1;i<=1005;i++)
	//cout<<a[i];
	
	cout<<a[n];
}

