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
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t,n,dc,dor,val,cm,om,c;
    vll v1,v2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>val;
            v1.push_back(val);
        }
        for(ll i=0; i<n; i++)
        {
            cin>>val;
            v2.push_back(val);
        }
        cm = *min_element(v1.begin(),v1.end());
        om = *min_element(v2.begin(),v2.end());
        c=0;
        for(ll i=0; i<n; i++)
        {
            dc=(v1[i]-cm);
            dor=(v2[i]-om);
            if(dc==0 || dor==0)
            {c=c+dc+dor;}
            else{
                if(dor<dc) c=c+dor+(dc-dor);
                else if(dc<dor) c=c+dc+(dor-dc);
                else c=c+dc;
            }
        }
        cout<<c<<endl;
        v1.clear();
        v2.clear();
    }
}

