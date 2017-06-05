
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,y,x,m,tc;
    cin>>tc;
    while(tc--){
    cin>>n>>x;
    m=0;
    while(n>0)
    {
    	ll mod=n%10;
    	m=m*10+mod;
    	n/=10;
    }
    y=0;
    while(x)
    {
    	ll mod=x%10;
    	y=y*10+mod;
        x/=10;
    }
    ll sum=m+y;
    ll revsum=0;
    while(sum)
    {
    	revsum=revsum*10+(sum%10);
    	sum/=10;
    }

    cout<<revsum<<endl;
}
}
