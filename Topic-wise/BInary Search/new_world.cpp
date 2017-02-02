//Link : https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/new-world-11/

#include <bits/stdc++.h>
using namespace std;
long long dis[100005];
long long a[100006];

long long binary_search(long long size, long long value)
{
	long long min = *max_element(dis,dis+size);
	long long max = accumulate(dis,dis+size,0);
	long long mid;
	while(min < max)
	{	
		mid = min + (max-min)/2;
		long long no = 1;
		long long cur = 0;
		for(long long int i=0;i<size;i++)
		{
			if(cur + dis[i] <= mid)
			{
				cur = cur + dis[i];
			}
			else
			{
				cur = dis[i];
				no++;
			}
		}
		if(no <= value)
			max = mid -1;
		else
			min = mid + 1;
	}
	return min;
}
int main()
{
	int t;
	scanf("%d",&t);
	long long n,k;
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		for(long long i=0;i<n;i++)
			scanf("%lld",&a[i]);
		for(int i=0;i<n-1;i++)
		{
			dis[i] = a[i+1] - a[i];
		}
		long long ans = binary_search(n-1,k);
		printf("%lld\n",ans);
	}
}
