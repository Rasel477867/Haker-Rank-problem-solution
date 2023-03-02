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
stack<ll>s;
stack<ll>s1;
stack<ll>s2;
vector<ll>v;
vector<ll>v1;
vector<ll>v2;

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
   ll t,n,a,b,f,c;
   cin>>f>>b>>c;
   for(i=0; i<f; i++)
   {
       cin>>a;
       v.pb(a);

   }
   for(i=0; i<b; i++)
   {
       cin>>a;
       v1.pb(a);
   }
   for(i=0; i<c; i++)
   {
       cin>>a;
       v2.pb(a);
   }
  ll sum=v[f-1];

   for(i=f-2; i>=0; i--)
   {
       s.push(sum);
       sum+=v[i];

   }
    s.push(sum);
    sum=v1[b-1];
    for(i=b-2; i>=0; i--)
    {
        s1.push(sum);
        sum+=v1[i];
    }
    s1.push(sum);
    sum=v2[c-1];
    for(i=c-2; i>=0; i--)
    {
        s2.push(sum);
        sum+=v2[i];
    }
    ll y=1;
    s2.push(sum);
    while(1)
    {
        if(s.empty()|| s1.empty() || s2.empty())
        {
          y=0;
          break;
        }
        if(s.top()==s1.top() && s1.top()==s2.top())
             break;
        else if (s.top()==s1.top() && s2.top()>s.top())
               s2.pop();
        else if (s.top()==s1.top() && s2.top()<s.top())
        {
            s.pop();
            s1.pop();
        }
        else if(s1.top()==s2.top() && s1.top()<s.top())
               s.pop();
        else if(s1.top()==s2.top() && s1.top()>s.top())
        {
            s1.pop();
            s2.pop();
        }
        else if(s2.top()==s.top() && s1.top()>s.top())
              s1.pop();
        else if(s2.top()==s.top() && s1.top()<s.top())
        {
            s2.pop();
            s.pop();
        }
        else if(s.top()>s1.top() && s.top()>s2.top())
           s.pop();
        else if(s1.top()>s.top() && s1.top()>s2.top())
            s1.pop();
        else
            s2.pop();
    }
   if(y==0)
      cout<<0<<endl;
   else
    cout<<s.top()<<" "<<s2.top()<<" " <<s1.top()<<endl;


    return 0;
}

