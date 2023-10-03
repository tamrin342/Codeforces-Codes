#include<bits/stdc++.h>
#include <ctype.h>
#define ll long long
#define vll vector<long long>
#define ull unsigned long long
#define ull vector<unsigned long long>
#define vp vector < pair<long long, long long > >
using namespace std;
int main()
{ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,a,b,t,val;
    vll v;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>val;
            v.push_back(val);
        }
        ll total = b;
        for(ll i=0; i<n; i++)
        {
            if(v[i]<a)
                total=total+v[i];
            else
                total = total+a-1;
        }
         cout<<total<<endl;
        v.clear();
    }
}

