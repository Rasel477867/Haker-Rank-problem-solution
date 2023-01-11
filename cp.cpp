#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define pb push_back
#define ps push
#define pp pop
map<ll,vector<ll> >m1;
map<ll,ll>m;


vector<ll>v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,n,i,a,target,k,p,b;
    cin>>t;
    while(t--)
    {
        m.clear();
        m1.clear();

        cin>>k>>n;
        v.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
            m[a]+=1;
            m1[a].pb(i+1);
        }
        for(i=0; i<n; i++)
        {
            target=k-v[i];
            p=v[i];
            if(target<=0)
                continue;
            else if(target==p)
            {
                if(m[target]>1)
                    break;
            }
            else if(target>0)
            {
                if(m[target]!=0)
                    break;
            }
        }
        if(target==p)
        {
            a=min(m1[target][0],m1[target][1]);
            b=max(m1[target][0],m1[target][1]);
            cout<<a<<" "<<b<<endl;
        }
        else {
            a=min(m1[target][0],m1[p][0]);
            b=max(m1[target][0],m1[p][0]);
            cout<<a<<" "<<b<<endl;
        }

    }



return 0;
}
