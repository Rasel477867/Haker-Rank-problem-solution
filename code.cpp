#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back


using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
//ordered_multiset s3;
//ordered_multiset :: iterator it;
const ll mod=1e9+7;

const ll N=1e1;
bool sive[N];
vector<ll>prime;
vector<ll>v;
stack<ll>s;
map<ll,ll >m;
map<ll,ll >:: iterator it;

long long int gcd(long long int a,long long int b)
{
    long long int c;
    while(a%b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return b;
}
double cal(double x)
{
    double y=sqrt(x);
    return(x*x+2*y);
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j;
    for(i=0; i<N; i++)
    {
        sive[i]=true;
    }
    sive[0]=false;
    sive[1]=false;
    for(i=2; i*i<=N; i++)
    {
        if(sive[i])
        {
            for(j=i*i; j<N; j+=i)
            {
                sive[j]=false;
            }
        }
    }
    for(i=0; i<N; i++)
    {
        if(sive[i]==true)
            prime.pb(i);
    }

    /*start main funciton*/
   ll t,n,a,b,c;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(a==1)
       {
           cin>>b;
           m[b]++;
           s.push(b);

       }
       else if(a==2)
       {
           c=s.top();
           if(m[c]==1)
            m.erase(c);
           else
            m[c]--;
           s.pop();
       }
       else
       {
           it=m.end();
           it--;
           cout<<it->first<<endl;
       }
   }


    return 0;
}

