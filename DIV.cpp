#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define SIZE_N 1000000
#define SIZE_P 1000000

bool flag[SIZE_N+5];
int primes[SIZE_P+5];

int seive()
{
	int i,j,total=0,val;

	for(i=2;i<=SIZE_N;i++) flag[i]=1;

	val=sqrt(SIZE_N)+1;

	for(i=2;i<val;i++)
       	if(flag[i])
            		for(j=i;j*i<=SIZE_N;j++)
                		flag[i*j]=0;

    	for(i=2;i<=SIZE_N;i++)
       	if(flag[i])
            		primes[total++]=i;

    	return total;
}
int store_primes[100],freq_primes[100], store_divisor[10000], Total_Prime, ans;
//Very Much Faster Divisor Function…………………………………………
void divisor(int N)
{
    	int i,val,count;

    	val=sqrt(N)+1;
    	Total_Prime=0;
    	for(i=0;primes[i]<val;i++)
    	{
       	if(N%primes[i]==0)
        	{
            		count=0;
            		while(N%primes[i]==0)
            		{
                		N/=primes[i];
                		count++;
            		}
            		store_primes[Total_Prime]=primes[i];
            		freq_primes[Total_Prime]=count;
            		Total_Prime++;
			val=sqrt(N)+1;     // sqrt again for fast compute.
        	}
    	}
    	if(N>1)
    	{
       	store_primes[Total_Prime]=N;
        	freq_primes[Total_Prime]=1;
        	Total_Prime++;
    	}
}
void Generate(int cur,int num)
{
    int i,val;

    if(cur==Total_Prime)
    {
        store_divisor[ans++]=num;
    }
    else
    {
        val=1;
        for(i=0;i<=freq_primes[cur];i++)
        {
            Generate(cur+1,num*val);
            val=val*store_primes[cur];
        }
    }
}
ll bidghute[SIZE_N+5];
int main()
{
        seive();
        int total=seive();
    	int n,i,flg;
        ll m=0;
    	for(n=1;n<=1000000;n++)
    	{
       	divisor(n);
        	ans=0;
        	Generate(0,1);
        	sort(&store_divisor[0],&store_divisor[ans]);

        	//cout<<ans<<endl;
        	ll sn=sqrt(ans);
        	if(!flag[ans]){
                     flg=0;
                for(ll i=2;i<=sn;i++){
                        ll whoah=ans/i;
                    if(flag[i]==1 && flag[whoah]==1 && (i!= (ans/i)&& (whoah*i == ans))){
                            //cout<<i<<" "<<ans/i<<" "<<n<<" "<< ans<<endl;
                            flg=1;break;}
                }
                if(flg){
                bidghute[m]=n;    m++;
        	}

            }

    	}
    	for(ll i=8;i<m;i+=9)cout<<bidghute[i]<<endl;
    	return 0;
}


