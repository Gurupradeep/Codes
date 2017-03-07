#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int m = a.length();

	int n;
	cin>>n;

	int dp[m][n];

	memset(dp,0,sizeof(dp));

	dp[0][(a[0]-'0')%n]++;

	for(int i=1;i<m;i++)
	{
		//starting a new subsequence with index i 
		dp[i][(a[i]-'0')%n]++;
		for(int j=0;j<n;j++)
		{
			dp[i][j] += dp[i-1][j];


			dp[i][(j*10 + (a[i]-'0'))%n] += dp[i-1][j];
		}
	}

	cout<<dp[m-1][0]<<endl;
}