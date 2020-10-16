#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    int a[n],next[n],k[n];
    int has[100002]={0};
    stack<int>s;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        has[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        k[i]=has[a[i]];
    }
    for(int i=n-1;i>=0;i--)
    {


        while(!(s.empty())&&(k[s.top()]<=k[i]))
        {

           // next[i]=s.top();
            s.pop();
        }
        if(!s.empty())
            next[i]=s.top();
        else
            next[i]=-1;
        s.push(i);
    }
    for(int i=0;i<n;i++)
    {
        if(next[i]==-1)
            cout<<-1<<" ";
        else
        {
            cout<<a[next[i]]<<" ";
        }
    }
    cout<<endl;
    }

    

}
