#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int m = a.length();
	int n = b.length();
	int dp[1000][1000];
	int dp[0][0] = 0;

	for(int i=1;i<=m;i++)
		dp[i][0] = i;

	for(int i=1;i<=n;i++)
		dp[0][i] = i;

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			//order is Remove,insert,Replace
			if(a[i]==b[j])
				dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1;
		}
	}
	cout<<dp[m][n]<<endl;
}