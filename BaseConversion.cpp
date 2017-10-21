#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int num)
{
    int rem,result=0,i=1;
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
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
   cout<<anyToDecimal(num,sb);
}
