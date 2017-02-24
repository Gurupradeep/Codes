// Problem Link : https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/choosing-the-judges-7/


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int n;
	long long a[10006];
	long long dp[10006];
	scanf("%d",&t);
	int temp;
	temp = 0;
	while(t--)
	{
		temp++;
		scanf("%d",&n);
		dp[0] = 0;
		for(int i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		dp[1] = a[1];
		dp[2] = max(a[1],a[2]);
		for(int i=3;i<=n;i++)
			dp[i] = max(dp[i-2]+a[i], dp[i-1]);
		printf("Case %d: %lld\n",temp,dp[n]);
	}
}

