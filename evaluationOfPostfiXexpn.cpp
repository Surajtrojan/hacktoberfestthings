#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> myStack;
    string postfix;
    cout<<"Enter the postfix expression"<<endl;
    getline(cin,postfix);
    string temp="";
    for(int i=0;i<postfix.length();i++)
    {
        if(postfix[i]=='+')
        {
            int a=myStack.top();
            myStack.pop();
            int b=myStack.top();
            myStack.pop();
            myStack.push(b+a);
        }
        else if(postfix[i]=='-')
        {
            int a=myStack.top();
            myStack.pop();
            int b=myStack.top();
            myStack.pop();
            myStack.push(b-a);
        }
        else if(postfix[i]=='/')
        {
            int a=myStack.top();
            myStack.pop();
            int b=myStack.top();
            myStack.pop();
            myStack.push(b/a);
        }
        else if(postfix[i]=='*')
        {
            int a=myStack.top();
            myStack.pop();
            int b=myStack.top();
            myStack.pop();
            myStack.push(b*a);
        }
        else if(postfix[i]==' ')
        {
            /// Ignore
        }
        else
        {
            while(postfix[i]!=' ' && i!=postfix.length())
            {
                temp=temp+postfix[i];
                i++;
            }
            myStack.push(atoi(temp.c_str()));
            temp="";
            i--;
        }
    }
    cout<<"Final ans is: "<<myStack.top()<<endl;
}
