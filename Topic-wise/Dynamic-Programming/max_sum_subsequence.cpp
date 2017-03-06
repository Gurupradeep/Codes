#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[100];
	int dp[100];

	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>a[i];

	for(int i=1;i<=n;i++)
		dp[i] = a[i];

	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(a[i]>=a[j])
			{
				dp[i] = max(dp[i],dp[j] + a[i]);
			}
		}
	}
	int ans = -1;
	for(int i=1;i<=n;i++)
		ans = max(ans,dp[i]);
	cout<<ans<<endl;
}