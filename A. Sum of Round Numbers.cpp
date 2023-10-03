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
    ll val,t,len;
    vll v;
    string s;
    cin>>t;
    while(t--)
    {ll c=0;
        cin>>s;
        len = s.size();
        for(ll i=0; i<len; i++)
        {
            if(s[i]!=0)
            {
                val = (s[i]-48)*pow(10,(len-1-i));
                if(val!=0) c++;
                v.push_back(val);
            }
        }
        cout<<c<<endl;
        for(ll i=0; i<v.size(); i++)
            {if(v[i]!=0)
                cout<<v[i]<<" ";
            }
            cout<<endl;

        v.clear();
    }
}
