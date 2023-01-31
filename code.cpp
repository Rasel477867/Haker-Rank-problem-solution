#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll  unsigned long long int
#define pb push_back
using namespace __gnu_pbds;
using namespace std;

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_multiset;
ordered_multiset s;
//ordered_multiset :: iterator it;
vector<ll>v;
map<char,ll>m;
int ar[32];
ll fun(ll num)
{
    ll i=0;
    while(num!=1)
    {
        num/=2;
        i++;
    }
   return i;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,c,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        while(n!=1)
        {
            if(n&(n-1))
            {
            a=fun(n);
            ll b=1<<a;
            n=n-b;
            }
            else{

             n=n>>1;
            }
            c++;

        }
        if(c%2==1)
        {
            cout<<"Louise"<<endl;
        }
        else{
            cout<<"Richard"<<endl;
        }
    }



  return 0;
}
