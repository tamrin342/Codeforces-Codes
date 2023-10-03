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
    ll n,s,r,val,t,sum;
    vll v1;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>r;
        sum=r;
        ll ans = r/(n-1);
        for(ll i=0; i<n-2; i++)
        {
            v1.push_back(ans);
            sum=sum-ans;
        }

         if(sum>(s-r))
        {
            ll temp=sum-(s-r);
            for(ll i=0; i<n-2; i++)
            {
                v1[i]=v1[i]+1;
                temp--;
                if(temp==0) break;
            }
        v1.push_back(s-r);
        v1.push_back(s-r);
        }
        else
        {
        v1.push_back(sum);
        v1.push_back(s-r);
        }

        for(ll i=0; i<n; i++)
            cout<<v1[i]<<" ";
        cout<<endl;
        v1.clear();
    }
}
