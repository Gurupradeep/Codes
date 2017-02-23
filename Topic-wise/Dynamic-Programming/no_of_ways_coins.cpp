//No of ways of getting particular total from coins

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int coins[100];
	for(int i=1;i<=n;i++)
		cin>>coins[i];
	int total;
	cin>>total;
	int dp[102][1000];
	dp[0][0] = 0;
	for(int i=1;i<=n;i++)
		dp[i][0] = 1;
	for(int i=1;i<total;i++)
		dp[0][i] = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=total;j++)
		{
			if(j>=coins[i])
				dp[i][j] = dp[i-1][j] + dp[i][j-coins[i]];
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout<<dp[n][total]<<endl;
}