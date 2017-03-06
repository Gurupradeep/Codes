#include <bits/stdc++.h>

using namespace std;

int main()
{
	int dp[1000][1000];
	int a[1000][1000];
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
		dp[1][0] = 0;
		dp[0][1] = 0;
//	cout<<"hello"<<endl;
	for(int i=1;i<=n;i++)
		dp[1][i] = dp[1][i-1] + a[1][i];
	for(int i=1;i<=m;i++)
		dp[i][1] = dp[i-1][1] + a[i][1];
	dp[0][0] = 0;
	for(int i=2;i<=m;i++)
	{
		for(int j=2;j<=n;j++)
		{
			dp[i][j] = a[i][j] + min(dp[i-1][j],dp[i][j-1]);
		}
	}
/*	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ",dp[i][j]);
		}
		cout<<endl;
	}*/
	cout<<dp[m][n]<<endl;
}