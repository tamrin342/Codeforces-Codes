#include<bits/stdc++.h>
#include <ctype.h>
#define ll long long
#define vll vector<long long>
#define vp vector < pair<long long, long long > >
using namespace std;
int main()
{ll n,t;
cin>>t;
while(t--)
{
    cin>>n;
    if(n%2==0) cout<<n/2-1<<endl;
    else cout<<n/2<<endl;
}
}
