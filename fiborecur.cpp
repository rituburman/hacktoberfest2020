#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{ int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp=fibo(i);
        cout<<temp<<endl;
    }



    return 0;
}
