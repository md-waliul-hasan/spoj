#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll> mp;
ll f(ll n)
{
    if(n==0)return 0;
    if(mp[n]!=0)return mp[n];
    else
        return mp[n]=max(n,(f(n/2)+f(n/3)+f(n/4)));
}
int main()
{
    ll n;
    while(cin>>n)
    {
        mp.clear();
        ll ans=f(n);
        cout<<ans<<endl;
    }
}

