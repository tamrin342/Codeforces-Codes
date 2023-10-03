#include<bits/stdc++.h>
#define ll long long
#define vll vector<long long>
using namespace std;
int sum(int n)
{int sum=0;
    for (int i=n-1; i>0; i--)
        sum=sum+i;
    return sum;
}

int32_t main()
{
   int n,c; cin>>n;
   string s;
   vector<string> vs;
   for(int i=0; i<n; i++)
   {
       cin>>s;
       vs.push_back(s);
   }
   ll total1=0;
   ll total2=0;
   for(int i=0; i<n; i++)
   {c=0;
       for(int j=0; j<n; j++)
       {
           if(vs[i][j]=='C')
           c++;
       }
       if(c>1)
        total1 = total1+sum(c);
   }

   for(int i=0; i<n; i++)
   {c=0;
       for(int j=0; j<n; j++)
       {
           if(vs[j][i]=='C')
           c++;
       }
       if(c>1)
        total2 = total2+sum(c);
   }
   cout<<total1+total2;

}
