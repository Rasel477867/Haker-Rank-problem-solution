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
ordered_multiset s;
ordered_multiset :: iterator it;
vector<ll>v;
bool cheak(ll n,ll a)
{
    return(n&(1<<a));
}
ll bset(ll n,ll i)
{
    return(n|(1<<i));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned int n,a,i,b,t;
    cin>>t;
     while(t--)
    {
        cin>>n;
        for(i=0; i<32; i++)
        {
            a=(n^(1<<i));
            n=a;


        }
        cout<<n<<endl;
    }
  return 0;
}
