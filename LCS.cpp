#include <iostream>
using namespace std;


int LCS(string A,string B, int n, int m)
{
    int t[n+1][m+1]; int maxi = 0;
    for(int i=0;i<=n;i++)
    for(int j=0;j<=m;j++)
    if(i==0 || j==0)
    t[i][j]=0;
    
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
        if(A[i-1]==B[j-1])
        t[i][j] = 1 + t[i-1][j-1];
        else
        t[i][j] =0;
        
        if(t[i][j]>maxi)
        maxi=t[i][j];
        
    }
    return maxi;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n ,m;
	    cin>>n>>m;
	    string A,B;
	    cin>>A>>B;
	    cout<<LCS(A,B,n,m)<<endl;
	}
	return 0;
}
