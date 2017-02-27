#include<bits/stdc++.h>

using namespace std;

int max_histogram(int a[],int n)
{
	stack<int >s;
	int i = 0;
	int ans = 0;
	int area_at_top = 0;
	while(i<=n)
	{
		if(s.empty() || a[s.top()] <= a[i])
			s.push(i++);
		else
		{
			int top = s.top();
			s.pop();
			area_at_top = a[top]*(s.empty() ? i : i - s.top()-1);

			if(area_at_top > ans)
				ans = area_at_top;
		}
	}
	while(s.empty() == false)
	{
		int top = s.top();
			s.pop();
			area_at_top = a[top]*(s.empty() ? i : i - s.top()-1);

			if(area_at_top > ans)
				ans = area_at_top;
	}
	return ans;
}

int main()
{
	int m,n;
	cin>>m>>n;
	int dp[1000];
	int a[1000][1000];
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	for(int i=1;i<=n;i++)
		dp[i] = 0;
	int ans = -1;
	int temp ;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j] == 0)
				dp[j] = 0;
			else
				dp[j] = dp[j] + 1;
		}
		temp = max_histogram(dp,n);
		ans = max(temp,ans);

	}
	cout<<ans<<endl;
}