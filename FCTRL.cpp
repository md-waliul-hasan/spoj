#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll digit(ll n)
{
    ll sum=0;
    while(n)
    {
        sum+=n/5;
        n/=5;
    }
    return sum;
}
int main()
{
    ll tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cout<<digit(n)<<endl;
    }
}
