#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long n,q;
	long long a[100006];
	cin>>n>>q;
	for(long long i=0;i<n;i++)
		scanf(" %lld",&a[i]);
	long long maxi = *max_element(a,a+n);
	long long mini = *min_element(a,a+n);
 //   cout<<mini<<" "<<maxi<<endl;
	long long temp;
	for(long long i=0;i<q;i++)
	{
		//cout<<maxi<<endl;

		scanf("%lld",&temp);
		if(mini<=temp&&temp<=maxi)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
