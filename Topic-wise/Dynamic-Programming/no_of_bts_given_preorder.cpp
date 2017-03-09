//No of binary trees possible given preorder of length n


#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cin>>n;

	int dp[1000000];
	dp[0] = 1;
	dp[1] = 1;


	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			dp[i] += dp[i-j-1]*dp[j];
		}
	}
	cout<<dp[n]<<endl;
}