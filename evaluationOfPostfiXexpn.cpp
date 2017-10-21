#include<bits/stdc++.h>
using namespace std;

int main()
{
      stack<double> stk;
      cout<<"Enter the postfix expression to be evaluated"<<"\n";
      string postfix;
      cin>>postfix;
      for(int i=0;i<postfix.size();i++)
      {

            if(postfix[i]=='+'||postfix[i]=='*'||postfix[i]=='-'||postfix[i]=='/')
            {
                  double A = stk.top();
                  stk.pop();
                  double B = stk.top();
                  stk.pop();
                  if(postfix[i]=='+')
                        stk.push(B+A);
                  else if(postfix[i]=='-')
                        stk.push(B-A);
                  else if(postfix[i]=='*')
                        stk.push(B*A);
                  else if(postfix[i]=='/')
                  {
                        double temp = B/A;
                        stk.push(temp);
                  }
            }
            else
                  stk.push((postfix[i] - '0'));
      }
      double ans = stk.top();
      cout<<ans;

      return 0;
}
