#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(n%6==0)
			printf("Misha\n");
		else
			printf("Chef\n");
	}
}
