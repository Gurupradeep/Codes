//To find sum of a any ractangular sub array given a 2D matrix


#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[1000][1000];
	int m,n;
	cin>>m>>n;

	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];


	int dp[1000][1000];

	for(int i=0;i<=n;i++)
		dp[0][i] = 0;

	for(int i=0;i<=m;i++)
		dp[i][0] = 0;


	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + a[i][j];
		}
	}

	int r1,c1,r2,c2;

	cin>>r1>>c1>>r2>>c2;

	int ans = dp[r2][c2]-dp[r1-1][c2]-dp[r2][c1-1] + dp[r1-1][c1-1];

	cout<<ans<<endl;

}