#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100000000
bool Check(ll N,ll pos){return (bool)(N & (1<<pos));}
ll Set(ll N,ll pos){return N=N |(1<<pos); }
ll m;
ll b[mx+1];


int status[(mx/32)+2];
void sieve()
{
	 int i, j, sqrtN;
     sqrtN = int( sqrt( mx ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= mx; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }


b[1]=2;
	 for(i=3,m=2 ;i<=mx;i+=2)
		 if( Check(status[i>>5],i&31)==0){b[m]=i;m++;}
}
int main()
{
    sieve();
    for(ll i=1;i<=m;i++)if(i%100==1)cout<<b[i]<<endl;
   return 0;
}

