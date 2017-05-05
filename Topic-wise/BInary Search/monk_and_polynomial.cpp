#include <bits/stdc++.h>

using namespace std;
long long a,b,c;
long long poly(long long x)
{
	return a*x*x + b*x + c;
}
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		
		scanf("%lld %lld %lld",&a,&b,&c);
		long long k;
		scanf("%lld",&k);
		long long low = 0;
		long long high = 100000;
		long long ans;
		while(low<=high)
		{
			long long mid = (high+low)/2;
			//cout<<"Mid"<<" "<<mid<<endl;
			if(poly(mid)>=k &&(poly(mid-1)<k && poly(mid+1)>k))
			{
				ans = mid;
				break;
			}
			else if(poly(mid) > k)
			{
				high = mid - 1;
			}
			else
			{
				low = mid +1;
			}
		}
		printf("%lld\n",ans);


	}
}
