#include<bits/stdc++.h>
#include <ctype.h>
#define ll long long
#define vll vector<long long>
#define vp vector < pair<long long, long long > >
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int t;
string p,s;
cin>>t;
while(t--)
{
p="314159265358979323846264338327";
cin>>s;
int c=0;
for(int i=0; i<p.size(); i++)
{
    if(s[i]==p[i]) c++;
    else break;
}
cout<<c<<endl;
}
}
