#include<bits/stdc++.h>

using namespace std;

int main()
{

	int eggs,floors;
	cin>>eggs>>floors;

	int dp[1000][1000];
	dp[0][0] = 1;
	for(int i=1;i<=floors;i++)
		dp[0][i] = 0;
	for(int i=1;i<=eggs;i++)
		dp[i][0] = 0;
	for(int i=1;i<=floors;i++)
		dp[1][i] = i;
	for(int i=2;i<=eggs;i++)
	{
		for(int j=1;j<=floors;j++)
		{
			if(i>j)
				dp[i][j] = dp[i-1][j];
			else
			{
				dp[i][j] = 1000000;

				for(int k=1;k<=j;k++)
				{
					int temp = 1 + max(dp[i-1][k-1],dp[i][j-k]);
					if(temp < dp[i][j])
						dp[i][j] = temp;
				}
			}
		}
	}
	cout<<dp[eggs][floors]<<endl;
}