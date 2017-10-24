#include<bits/stdc++.h>
using namespace std;
int a[100005]={1,1};
void sieve()
{
    for(int i=0;i*i<=100005;i++)
    {
        if(a[i]==0)
        {
            for(int j=2;j*i<=100005;j++)
            {
                a[i*j]=1;
            }
        }
    }
}
int b[100005];
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t>0)
    {
        long long int m,n;
        cin>>m>>n;
        long long int diff=n-m+1;
        for(int i=0;i<diff;i++)
        {
            b[i]=0;
        }
        for(int i=0;i*i<=n;i++)
        {
            if(a[i]==0)
            {
                long long int start=m/i;
                start=start*i;
                for(int j=start;j<=n;j=j+i)
                {
                   if(j<m)
                    continue;
                  b[j-m]=1;
                }
            }
        }
        for(int i=0;i*i<=n;i++)
        {
            if(i>=m && i<=n)
            {
                if(a[i]==0)
                {
                    cout<<i<<endl;
                }
            }
        }
        for(int i=0;i<diff;i++)
        {
            if(b[i]==0 && (i+m)!=1)
            {
                cout<<(i+m)<<endl;
            }
        }
        cout<<endl;
        t--;
    }
}
