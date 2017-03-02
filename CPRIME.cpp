#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100000005
ll primes[6000005];
ll status[(mx/32)+2];

bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}
ll sieve()
{
	 ll i, j, sqrtN,m=0;
     sqrtN = ll( sqrt( mx ) );
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

	 primes[m]=2;m++;
	 for(i=3;i<=mx;i+=2)
		 if( Check(status[i>>5],i&31)==0)
	 	 {
	 	     primes[m]=i;m++;
	 	 }
	return m;
}

int main()
{

    ll tn= sieve();
    ll n;
    while(scanf("%lld",&n)==1){ if(!n)break;
    ll t=ll(upper_bound(primes,primes+tn,n)-primes);
    double d=(n/log(n));
    double ans=((abs(t-d))*100.0)/t;
    printf("%.1lf\n",ans);
    }
}
