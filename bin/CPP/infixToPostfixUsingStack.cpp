// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;

int pc(char ch){
    switch(ch){
           case '+':
           case '-':
           return 1;
           case '*':
           case '/':
           return 2;
           case '^': 
           return 3;
           case '(': 
           return -1;
    }
}
// The main function to convert infix expression
//to postfix expression
string infixToPostfix(string s)
{
    string g="";
    int j=-1;
    stack< char >p;
    p.push('(');
    s+=')';
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 ){
            g+=s[i];
            
        }
         else if(s[i]=='('){
            p.push(s[i]);
        }
         else if (s[i]==')'){
            while(p.top()!='('){
                
                g+=p.top();
                p.pop();
            }
            p.pop();
        }
        else{
                while(!p.empty() && pc(p.top())>=pc(s[i])){
                     char c=p.top();
                      p.pop();
                     g+=c;
                    
                    
                }
                    p.push(s[i]);
                    
            }
        }
       
    return g;
    // Your code here
}


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        cout<<infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
