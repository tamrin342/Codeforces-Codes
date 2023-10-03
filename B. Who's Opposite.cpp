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
    ll t,a,b,c,val,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        m= 2*(abs(a-b));
        if(a>m || b>m || c>m) cout<<-1<<endl;
        else if( a!=1 && b==a+1) cout<<-1<<endl;
        else{
                val=abs(a-b);
            if(c+val<=m) cout<<c+val<<endl;
           else cout<<c-val<<endl;
        }
    }
}
