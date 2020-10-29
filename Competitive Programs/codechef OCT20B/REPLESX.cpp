#include <bits/stdc++.h>  // This will work only for g++ compiler.


#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

//short hand for usual tokens
#define pb push_back
#define fi first
#define se second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())


using namespace std;

// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
#define mod 1000000007

int main()
{
    ll tc = 1;
    cin>>tc;
    while (tc--)
    {
        ll n,x,p,k;cin>>n>>x>>p>>k;
        vector<ll>a(n);for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int ans=0;
        if(n==1){
            if(a[0]==x)ans=0;
            else ans=1;
        }
        else if(p<k){
            if(a[p-1]==x)ans=0;
            else if(a[p-1]>x)ans=(p-1)-(upper_bound(a.begin(),a.end(),x)-a.begin())+1;
            else ans=-1;
        }
        else if(p>k){
            if(a[p-1]==x)ans=0;
            else if(a[p-1]<x)ans=lower_bound(a.begin(),a.end(),x)-a.begin()-(p-1);
            else ans=-1;
        }
        else if(p==k){
            if(a[p-1]==x)ans=0;
            else if(a[p-1]>x)ans=p-1-(upper_bound(a.begin(),a.end(),x)-a.begin())+1;
            else ans=lower_bound(a.begin(),a.end(),x)-a.begin()-(p-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
