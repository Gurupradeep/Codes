//Link : https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/kth-smallest-number-again-2/


#include <bits/stdc++.h>
using namespace std;
vector<pair< long long , long long > > a,b;
vector< long long > s;

long long binary_search(long long size, long long val)
{
	long long low=0,high=size,mid,temp;
	while(high>=low)
	{
		mid = (low+high)/2;
		if(val>s[mid] && (mid == size || val <= s[mid+1]))
		{
			if(mid == size)
				return -1;
			else
			{
				temp = val - s[mid];
				return b[mid].first + val - 1;
			}
		}
		if(val<s[mid])
			high = mid -1;
		if(val>s[mid])
			low = mid + 1;
	}
}
void modify()
{
	int size;
	size = a.size();
	int t = 0;
	b.push_back(a[0]);
	long long p,q;
	for(int i=1;i<size;i++)
	{
		p = a[i].first;
		q = a[i].second;
		if(p>b[t].second)
		{
			b.push_back(a[i]);
			t++;
		}
		else
		{
			b[t].second = max(b[t].second,q);
		}

	}

}
int main()
{
	int t;
	long long p,q;
	int n,qu;
	scanf("%d",&t);
	while(t--)
	{
		a.clear();
		b.clear();
		s.clear();
	
		scanf("%d %d",&n,&qu);
		for(int i=0;i<n;i++)
		{
			scanf("%lld %lld",&p,&q);
			a.push_back(make_pair(p,q));
		}
		sort(a.begin(),a.end());
		modify();
		long long size = b.size();
		s.push_back(0);
		for(long long i=0;i<size;i++)
		{
			long long temp;
			temp = (b[i].second-b[i].first) + s[i];
			s.push_back(temp); 
		} 
		while(qu--)
		{
			long long ans;
			long long k;
			scanf("%lld",&k);
			ans = binary_search(size,k);
			printf("%lld\n",ans);
		}
	}
}