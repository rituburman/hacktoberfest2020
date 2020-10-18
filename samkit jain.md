    //Author -> Samkit Jain\\
                      
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void main()
{
    int x[10];
    for(int i=0;i<10;i++)
    {
        cin>>x[i];
    }
    
    // sorting in increasing order
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
