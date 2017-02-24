//Problem link : https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/samu-and-shopping/



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int dp1[100006],dp2[100006],dp3[100006];
	int a[100005],b[100006],c[100006];
	int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d %d %d",&a[i],&b[i],&c[i]);
		}
		dp1[1] = a[1];
		dp2[1] = b[1];
		dp3[1] = c[1];
		for(int i=2;i<=n;i++)
		{
			dp1[i] = a[i] + min(dp2[i-1],dp3[i-1]);
			dp2[i] = b[i] + min(dp1[i-1],dp3[i-1]);
			dp3[i] = c[i] + min(dp1[i-1],dp2[i-1]);
		}
		cout<<min(min(dp1[n],dp2[n]),dp3[n])<<endl;

	}

}
