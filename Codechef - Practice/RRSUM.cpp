#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long n,m;
	scanf("%lld %lld",&n,&m);
	if(n%2==1||n%2==0)
	{
		while(m--)
		{
			long long q;
			scanf("%lld",&q);
			if(q>(3*n)||q<(n+2))
			{
				printf("0\n");
				continue;
			}
			else
			{
                 if(q==(2*n+1))
                 {
                 	printf("%lld\n",n);
            	 }
            	 else if(q<(2*n+1))
            	 {
            	 	printf("%lld\n",q-n-1);
            	 }
            	 else
            	 {
            	 	printf("%lld\n",(3*n+1)-q);
            	 }
			}
		}
	}



}
