#include<iostream>

using namespace std;

int main()
{
    int n=0,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    long factorial=1;
    cout<<"The factorial is: ";
    while(n!=0)
    {
        factorial=factorial*n;
        n--;
    }
    cout<<factorial<<endl;
    cout<<"The trailing zeroes are: ";
    while(factorial%10==0)
    {
        count++;
        factorial=factorial/10;
    }

    cout<<count<<endl;
    return 0;

}