#include<bits/stdc++.h>
using namespace std;
int decimalToAny(long long int num,int db)
{
    long long int rem,result=0,i=1;
    while(num!=0)
    {
        rem=num%db;
        num=num/db;
        result=result+(rem*i);
        i=i*10;
    }
    return result;
}
long long int anyToDecimal(long long int num,int sb)
{
    long long int ans=0,i=0;
    while(num!=0)
    {
        //long long int power=pow(double(sb),double(i));
       // cout<<power<<" "<<sb<<" "<<i<<endl;
        //long long int rem=num%10;
       // cout<<ans<<" "<<rem<<" "<<power<<endl;
        ans=ans+((num%10)*pow(sb,i));
        //cout<<ans<<endl;
        num=num/10;
        i++;
    }
    return ans;
}
int main()
{
   ios::sync_with_stdio(false);
   int sb;
   int db;
   long long int num;
   cin>>sb>>db>>num;
   long long int ans=anyToDecimal(num,sb);
   long long int finalAns=decimalToAny(ans,db);
   cout<<finalAns;
}
