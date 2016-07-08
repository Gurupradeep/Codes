#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		char a[1000006],b[1000006];
		scanf("%s",a);
		scanf("%s",b);
		long long  n = strlen(a);
		long long p = 0;
		long long q = 0;
		int flag1= 1;
		int flag2= 1;
		for(long long i=0;i<n;i++)
		{
			if(a[i]=='0')
				flag1=0;
			if(a[i]=='1')
				flag2=0;
			if(a[i]!=b[i])
			{
				if(a[i]=='1')
					p++;
				else
					q++;
			}
		}
		if(flag1 || flag2)
		{
			if(strcmp(a,b)==0)
				printf("Lucky Chef\n0\n");
			else
				printf("Unlucky Chef\n");
		}
		else
	    {
	    	printf("Lucky Chef\n");
	    	printf("%lld\n",max(p,q));
	    }
	}
}
