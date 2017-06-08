#include<iostream>
#include<map>
#include<string>
using namespace std;
typedef unsigned long long  ll;
int main()
{
  ll a,b;
  int tc,n,m;
  cin>>tc;
  while(tc--){
        string x,y;
        map<int,int> ar;
  cin>>x>>y;
  a=x[x.size()-1]-'0',b=(y[y.size()-2]-'0')*10+y[y.size()-1]-'0';
   n=a%10;  m=b%4;
  if(n==0)cout<<0<<endl;
  else if(n==1)cout<<1<<endl;
  else if(n==2){
       ar[0]=6,ar[1]=2,ar[2]=4,ar[3]=8;
      cout<<ar[m]<<endl; }
  else if(n==3) {
       ar[0]=1,ar[1]=3,ar[2]=9,ar[3]=7;
      cout<<ar[m]<<endl; }
  else if(n==4) {
       ar[0]=6,ar[1]=4,ar[2]=6,ar[3]=4;
      cout<<ar[m]<<endl; }
  else if(n==5) {
       ar[0]=5,ar[1]=5,ar[2]=5,ar[3]=5;
      cout<<ar[m]<<endl; }
  else if(n==6) {
      ar[0]=ar[1]=ar[2]=ar[3]=6;
      cout<<ar[m]<<endl; }
  else if(n==7) {
     ar[0]=1,ar[1]=7,ar[2]=9,ar[3]=3;
      cout<<ar[m]<<endl; }
  else if(n==8) {
     ar[0]=6,ar[1]=8,ar[2]=4,ar[3]=2;
      cout<<ar[m]<<endl; }
  else if(n==9) {
    ar[0]=1,ar[1]=9,ar[2]=1,ar[3]=9;
      cout<<ar[m]<<endl; } } }
