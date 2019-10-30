#include<bits/stdc++.h>
using namespace std;
long long int n,i,x,a[1000005],j;

int main()
{
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl<<1;
        exit(0);
    }
    if(n==2)
    {
        cout<<1<<endl<<1<<" "<<1;
        exit(0);
    }
    
   for(i=2;i<=sqrt(n+1);i++)
    {
        for(j=i*i;j<=n+1;j=j+i)
        {
            a[j]=1;
        }
    }
    cout<<2<<endl;
    for(i=2;i<=n+1;i++)
    cout<<a[i]+1<<" ";
}
