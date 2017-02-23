#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int m = a.length();
	int n = b.length();
	int dp[200][200];
	dp[0][0] = 0;
	for(int i=1;i<=m;i++)
		dp[0][m] = 0;
	for(int j=1;j<=n;j++)
		dp[j][0] = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[j-1]==b[i-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	cout<<dp[n][m]<<endl;

}