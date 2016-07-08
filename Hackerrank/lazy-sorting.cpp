#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long factorial_number(int n)
{
	long long ans = 1;
	for(int i=1;i<=n;i++)
		ans = ans * i;
	return ans;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	int h[102];
	for(int i=0;i<=100;i++)
		h[i] = 0;
	int min =0;
	int flag = 1;
	for(int i=0;i<n;i++)
	{
		int temp;
		scanf("%d",&temp);
		h[temp]++;
		if(temp>=min)
			min = temp;
		else
			flag = 0;
	}
	long long c = 1;
	for(int i=1;i<=100;i++)
	{
		if(h[i]!=0)
			c = c * h[i];
	}
	long long t = factorial_number(n);
	long long w = t - c;
	double ans = 1.0 + (w*1.0)/(c*1.0);
//	double c_p = c/(t*1.0);
//	double w_p = w/(t*1.0);
//	double ans1 = 1/(1.0*(1 - w_p));
//	double ans2 = w_p*ans1*ans1;
//	double ans = c_p*(ans1+ans2);
	if(flag)
		printf("0.000000\n");
	else
    printf("%.6lf\n",ans);
}
