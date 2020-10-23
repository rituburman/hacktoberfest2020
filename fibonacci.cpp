
#include<iostream>
using namespace std;
int main()
{

    int n,a=0,b=1,temp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i<=1){
            temp=i;
        }
        else{
            temp=a+b;
            a=b;
            b=temp;

        }
        cout<<temp<<" ";
    }
    return 0;
}
