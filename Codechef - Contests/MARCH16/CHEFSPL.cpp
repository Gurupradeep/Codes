#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		char a[1000006];
		int  p[30];
		int  q[30];
		scanf("%s",a);
		memset(p,0,sizeof(p));
		memset(q,0,sizeof(q));
		int flag=1;
		if(strlen(a)%2==0)
		{
			for(long long i=0;i<(strlen(a)/2);i++)
			{
				if(a[i]!=a[i+(strlen(a)/2)])
				{
					flag=0;
					break;
				}
			}
			if(flag)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
			int flag1=1;
			int flag2=1;
			long long i=0;
			long long j=(strlen(a)/2);
			while(i<(strlen(a)/2))
			{
				if(j==strlen(a))
				{
					flag1=0;
					break;
				}
				if(a[i]==a[j])
				{
					i++;
					j++;
				}

				else
				{
					j++;
				}
			}
			i=0;
			j=(strlen(a)/2)+1;
			while(j<strlen(a))
 			{
 				if(i==(strlen(a)/2)+1)
 				{
 					flag2=0;
 					break;
 				}
 				if(a[i]==a[j])
 				{
 					i++;
 					j++;
 				}
 				else
 				{
 					i++;
 				}
 			}
 			if((flag1||flag2)&&(strlen(a)>1))
 				printf("YES\n");
 			else
 				printf("NO\n");


		}
	}
}
