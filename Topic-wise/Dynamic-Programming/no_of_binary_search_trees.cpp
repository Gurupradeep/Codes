#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int dp[10000];

	dp[1] = 1;
	dp[2] = 2;
	dp[0] = 0;
	dp[n+1] = 0;
	for(int i=3;i<=n;i++)
		dp[i] = 0;
	for(int i=3;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1)
				dp[i] = dp[i] + dp[i-j];
			else if(j==i)
				dp[i] = dp[i] + dp[i-1];
			else
				dp[i] = dp[i] + dp[j-1]*dp[i-j];
		}
	}
	cout<<dp[n]<<endl;
}