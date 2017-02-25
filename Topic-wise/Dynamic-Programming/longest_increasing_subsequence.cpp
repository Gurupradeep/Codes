// Problem : Longest increasing subsequence

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int a[100];
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int dp[100];
	for(int i=1;i<=n;i++)
		dp[i] = 1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(a[i]>=a[j])
			{
				if(dp[j]+1 > dp[i])
					dp[i] = dp[j] + 1;
			}
		}
	}
	int ans ;
//	for(int i=1;i<=n;i++)
//		cout<<dp[i]<<endl;
	ans = *max_element(dp+1,dp+n+1);
	cout<<ans<<endl;

}