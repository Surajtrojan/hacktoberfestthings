#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a[100000],b[100000],i,j,k,z,count;
    cin>>t;
    for(z=0;z<t;z++)
    {
        count=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(a[i]<=b[i] && b[i]>=a[n-i-1])
                count++;
        }
        if(count==n)
            cout<<"both"<<endl;
        else
        {
            count=0;
            for(i=0;i<n;i++)
            {
                if(b[i]>=a[i])
                    count++;
            }
            if(count==n)
                cout<<"front"<<endl;
            else
            {
                count=0;
                for(i=0;i<n;i++)
                {
                    if(b[i]>=a[n-i-1])
                    count++;
                }
                if(count==n)
                    cout<<"back"<<endl;
                else
                    cout<<"none"<<endl;
            }
        }
    }
    return 0;
}
