#include <bits/stdc++.h>
using namespace std;
#define sz(a)               int((a).size())
#define ll                  long long
#define pb                  push_back
#define ld                  long double
#define mp                  make_pair
#define vi                  vector<ll>
#define vii                  vector<pi>
#define endl                "\n"
#define ff                  first
#define ss                  second
#define all(c)              (c).begin(),(c).end()
#define allr(c)             (c).rbegin(),(c).rend()
#define rep(i,n)            for(ll i=0;i<n;i++)
#define cpresent(c,x)       (find(all(c),x) != (c).end())
#define input(a,n)          for(long long i=0;i<n;i++)cin>>a[i]
#define output(a,n)         for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define reset(a,n)          memset(a,n,sizeof(a))   // n can only be 0 or -1
#define vl                  LLONG_MIN
#define vm                  LLONG_MAX
#define ep                  1e-10
#define seed                13331
#define pi                  pair<ll,ll>
#define inf                 10e9
#define N                   1000000
#define minp                vector<ll>, greater<ll>
#define M                   1000000007
#define MM                  1000000009
#define pie                 3.1415926535897932384626433832795
#define eu                  2.718281828459045
#define                     she_taught_me_to_code cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);cin.tie(NULL);    clock_t startTime=clock();
#define time     cout<<(double(clock()-startTime )/(double)CLOCKS_PER_SEC)*1000<<" ms"<<endl;
#define debug(k) cout<<"\t-> "<<#k<<" = "<<k<<endl;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
#define N 1000000
ll n,m;
ll id[N]={};
ll sz[N]={};
void initialise()
{
    for(ll i=1;i<=n;i++)
    {
        id[i]=i;
        sz[i]=1;
    }
}
ll root(ll i)                               // log(n) time
{
    while(id[i]!=i)
    {
        id[i]=id[id[i]];
        i=id[i];
    }
    return i;
}
bool connected(ll a,ll b)                   // log(n) time
{
    return root(a)==root(b);
}
void merge(ll a,ll b)                       // log(n) time
{
    ll i=root(a),j=root(b);
    if(i==j)
        return;
    if(sz[i]<sz[j])
    {
        id[i]=j;
        sz[j]+=sz[i];
    }
    else
    {
        id[j]=i;
        sz[i]+=sz[j];
    }
}
vector<pi> adj[N];
vector<bool> visited(N,0);
vector<pair<ll,pi> > edg,mst;
void aE(ll u, ll v,ll val)
{
    adj[u].push_back(mp(v,val));
}
void kruskal()                              // Elog(E) time
{
    sort(all(edg));
    initialise();
    for(ll i=0;i<m;i++)
    {
        if(!connected(edg[i].ss.ff,edg[i].ss.ss))
        {
            mst.pb(edg[i]);
            merge(edg[i].ss.ff,edg[i].ss.ss);
        }
    }
}
int main()
{

    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll a,b,val;
        cin>>a>>b>>val;
        aE(a,b,val);
        aE(b,a,val);
        edg.pb(mp(val,mp(a,b)));
    }
    kruskal();
    for(ll i=0;i<mst.size();i++)
        cout<<mst[i].ss.ff<<" "<<mst[i].ss.ss<<endl;
}
