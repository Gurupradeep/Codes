#include<bits/stdc++.h>

using namespace std;

long long f[1000006];
long long b[1000006];
int main()
{
	int t;
	int n;
	long long a[1000006];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		f[0] = 0;
		for(int i=2;i<=n;i++)
			f[i] = a[i-1] + f[i-1];
		b[n] = 0;
		for(int i=n-1;i>=1;i--)
			b[i] = a[i+1]*2 + b[i+1];
		int ans = 0;
		int c1 = 0;
		int c2 = 0;
		for(int i=1;i<=n;i++)
		{
			if(f[i]<=b[i])
				c1++ ;
			else
				c2++;

		}
		cout<<c1<<" "<<c2<<endl;
	}

}