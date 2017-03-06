#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	int a[1000];
	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>a[i];

	int dp[10000];

	dp[1] = a[1];
	dp[2] = max(a[1],a[2]);

	for(int i=3;i<=n;i++)
	{
		dp[i] = max(dp[i-1],dp[i-2] + a[i]);
		dp[i] = max(dp[i],a[i]);
	}
	int ans = -1;
	for(int i=1;i<=n;i++)
		ans = max(ans,dp[i]);
	if(ans < 0)
		ans = 0;

	cout<<ans<<endl;
}