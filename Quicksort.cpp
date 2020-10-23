#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
    int n,m;
    cin>>m>>n;

    int p[m][n],q[n][m],r[m][m]; 

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>p[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>q[i][j];

    for (int i=0;i<m;i++) 
    { 
        for (int j=0;j<m;j++) 
        { 
            r[i][j]=0; 
            for (int k=0;k<n;k++) 
                r[i][j] += p[i][k]*q[k][j]; 
        } 
    }   

    cout << "Resultant matrix -"<<endl; 
    for (int i=0;i<m;i++) 
    { 
        for (int j=0;j<m;j++) 
            cout<<r[i][j]<<" "; 
        cout<<endl; 
    }
}
