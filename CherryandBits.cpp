//You can go to the question:-https://www.codechef.com/problems/CENS20A


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	ll n,m,i,j;
	cin>>n>>m;
	ll a[n][m] , pre[n][m];
	string s[n];
	for(i=0; i<n; i++)
	{
	    cin>>s[i];
	}
	
	
	for(i=0; i<n; i++)
	{
	    for(j=0; j<m; j++)
	    {
	        a[i][j] = s[i][j] - '0';
	        pre[i][j] = 0;
	    }
	}
	
	ll q;
	cin>>q;
	ll x1,y1,x2,y2;
	while(q--)
	{
	    cin>>x1>>y1>>x2>>y2;
	    x1--; x2--; y1--; y2--;
	    pre[x1][y1]++;
	    if(x2+1 < n && y2+1<m)
	        pre[x2+1][y2+1]++;
	    if(x2+1 < n)
	        pre[x2+1][y1]--;
	    if(y2+1 < m)
	        pre[x1][y2+1]--;
	}
	
	for(i=0; i<m; i++)
	{
	    for(j=1; j<n; j++)
	    {
	        pre[j][i] = pre[j][i] + pre[j-1][i];
	    }
	}
	for(i=0; i<n; i++)
	{
	    for(j=1; j<m; j++)
	    {
	        pre[i][j] = pre[i][j] + pre[i][j-1];
	    }
	}
	
	for(i=0; i<n; i++)
	{
	    for(j=0; j<m; j++)
	    {
	        if(pre[i][j]%2 != 0)
	        {
	            if(a[i][j] == 1)
	                cout<<"0";
	            else
	                cout<<"1";
	        }
	        else
	            cout<<a[i][j];
	    }
	    cout<<"\n";
	}
	
	return 0;
}
