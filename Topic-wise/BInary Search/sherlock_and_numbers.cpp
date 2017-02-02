//Link : https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/sherlock-and-numbers/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	long long n,k,p;
	long long a[100006];
	long long temp;
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&k,&p);
		for(long long i=1;i<=k;i++)
			scanf("%lld",&a[i]);
		a[0] = 0;
		a[k+1] = n+1;
		sort(a,a+k+2);
		int flag = 1;
		for(int i=1;i<=k+1;i++)
		{
			temp = a[i] - a[i-1] - 1;
			if(p -temp <=0)
			{
				printf("%lld\n", a[i-1]+p);
				flag = 0;
				break;
			}
			else
				p = p - temp;
		}
		if(flag)
			printf("-1\n");

	}
}
