#include<bits/stdc++.h>
#include <ctype.h>
#define ll long long
#define vll vector<long long>
#define vp vector < pair<long long, long long > >
using namespace std;
int main()
{string s;
ll t,n,val,k,ans;
cin>>t;
while(t--)
{ans =0;
    cin>>n>>k;
    cin>>s;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='B')
        {
            ans++;
            i=i+k-1;
        }
    }
    cout<<ans<<endl;
}
}


