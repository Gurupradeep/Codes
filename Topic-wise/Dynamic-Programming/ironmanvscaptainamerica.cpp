//problem link : https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/bike-trip/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int a[100006],b[100006],p[100006],q[100006];
	int dp1[100006],dp2[100006];
	int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			scanf("%d",&b[i]);
		for(int i=1;i<=n-1;i++)
			scanf("%d",&p[i]);
		for(int i=1;i<=n-1;i++)
			scanf("%d",&q[i]);
		dp1[1] = a[1];
		dp2[1] = b[1];
		for(int i=2;i<=n;i++)
		{
			dp1[i] = min(dp1[i-1]+a[i],dp2[i-1] + a[i] + q[i-1]);
			dp2[i] = min(dp2[i-1]+b[i],dp1[i-1] + b[i] + p[i-1]);
		}
		cout<<min(dp1[n],dp2[n])<<endl;


	}
}
