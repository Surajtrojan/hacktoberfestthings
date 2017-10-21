#include<bits/stdc++.h>
using namespace std;
vector<bool> primes(1000000);
int main()
{
    /// Generate prime number upto square root of 10^10 ie. 10^5
   ios::sync_with_stdio(false);
   for(long long int i=0;i<1000000;i++)
   {
       primes[i]=true;
   }
   for(long long int i=2;i*i<=1000000;i++)
   {
       if(primes[i]==true)
       {
           for(long long int j=2*i;j<1000000;j=j+i)
           {
               primes[j]=false;
           }
       }
   }
   int t;
   cin>>t;
   while(t--)
   {
       /// Now the real work
   long long int m,n;
   cin>>m>>n;
   vector<bool> ans(n-m+1); /// n greater
   for(long long int i=0;i<=(n-m);i++)
   {
       ans[i]=true;
   }
   for(long long int i=2;i*i<=n;i++)  /// i will not exceed square root m is 10^(4.5)
   {
       if(primes[i]==true)
       {
           for(long long int j=((m/i)*i)+i;j<=n;j=j+i)  /// for i=2 j=12;j<=20;j=j+i
           {
               if(j!=i)
               {
                   ans[j-m]=false;
               }
           }
       }
   }
   for(long long int i=0;i<=(n-m);i++)
   {
       if(ans[i]==true)
       {
           if(i+m!=1)
           {
               cout<<i+m<<endl;
           }
       }
   }
   cout<<endl;
   }

}
