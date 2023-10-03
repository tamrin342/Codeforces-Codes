#include<bits/stdc++.h>
#include <ctype.h>
#define ll long long
#define vll vector<long long>
#define ull unsigned long long
#define ull vector<unsigned long long>
#define vp vector < pair<long long, long long > >
using namespace std;
int main()
{
    ll n,t,k,val;
    vector< pair<ll,ll> > p1,p2;
    cin >> t ;
    vll b;
    while(t--)
    {
    cin>>n>>k;
    for(ll i=0; i<n; i++)
    {
        cin>>val;
        p1.push_back({val,i});
    }
    sort(p1.begin(),p1.end());
    for(ll i=0; i<n; i++)
    {
        cin>>val;
        b.push_back(val);
    }
    sort(b.begin(),b.end());
    for(ll i=0; i<n; i++)
    {
        p2.push_back({p1[i].second,b[i]});
    }
    sort(p2.begin(),p2.end());
    for(ll i=0; i<n; i++)
       cout<<p2[i].second<<" ";
       cout<<endl;
       p1.clear();
       p2.clear();
       b.clear();
    }
}
