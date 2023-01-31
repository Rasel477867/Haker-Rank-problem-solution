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
//ordered_multiset :: iterator it;
vector<ll>v;
map<char,ll>m;
int ar[32];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,c,i;
    cin>>n;
    c=0;
    for(i=0; i<n; i++)
    {
        cin>>a;
        c=c^a;
    }
    cout<<c;
  return 0;
}
