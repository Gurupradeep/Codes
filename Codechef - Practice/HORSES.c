#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a[10000];
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%lld",&a[i]);
		sort(a,a+n);
		long long min = 1000000002;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]-a[i]<min)
				min=a[i+1]-a[i];
		}
		printf("%lld\n",min);
	}
}
