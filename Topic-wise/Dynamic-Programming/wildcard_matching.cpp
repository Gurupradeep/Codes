#include <bits/stdc++.h>

using namespace std;

int main()
{
	string pat, inp;

	cin>>inp>>pat;


	int m = pat.length();
	int n = inp.length();

	int dp[1000][1000];

	dp[0][0] = 1;
	for(int i=1;i<=n;i++)
		dp[i][0] = 0;
	for(int i=1;i<=m;i++)
		dp[0][i] = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(pat[j-1] == inp[i-1] || pat[j-1] == '?')
				dp[i][j] = dp[i-1][j-1];

			else if(pat[j-1] == '*')
				dp[i][j] = dp[i-1][j] || dp[i][j-1];
			else
				dp[i][j] = 0;
		}
	}
	cout<<dp[n][m]<<endl;
}