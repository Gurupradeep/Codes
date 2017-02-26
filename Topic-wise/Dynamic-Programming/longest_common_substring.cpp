#include<bits/stdc++.h>

using namespace std;


int main()
{
	int m,n;
	string a,b;
	cin>>a>>b;
	m = a.length();
	n = b.length();
	int dp[m+1][n+1];
	for(int i=0;i<=m;i++)
		dp[i][0] = 0;

	for(int i=0;i<=n;i++)
		dp[0][i] = 0;

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else
				dp[i][j] = 0;
		}
	}
	int ans = -1;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			ans = max(ans,dp[i][j]);
	}
	cout<<ans<<endl;
}