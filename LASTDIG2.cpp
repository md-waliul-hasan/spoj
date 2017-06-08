#include<iostream>
using namespace std;
typedef long long  ll;
int ar[10][10]={{6,2,4,8},{1,3,9,7},{6,4,6,4},{5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9}};
int main()
{
  ll a,b;
  int tc,n,m;
  cin>>tc;
  while(tc--){
        string x;
  cin>>x>>b;
   a=x[x.size()-1]-'0';
  n=a%10;
  if(n==0)cout<<0<<endl;
  else if(n==1 )cout<<1<<endl;
  else if(n>1 && b==0)cout<<1<<endl;
  else {
    m=b%4;
    cout<<ar[n-2][m]<<endl;
  }
}
}
