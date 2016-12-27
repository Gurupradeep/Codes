#include<bits/stdc++.h>

using namespace std;

int a[2003][2003];
int b[2003][2003];
int c[2003][2003];
int d[2003][2003];
long long diff(int a[][2003],int b[][2003], int n)
{
	long long ans = 0;
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			if(a[i][j]!=b[i][j])
				ans++;
		}
		
	}
	return ans ;
}
int main()
{
	int n;
	int q;

	scanf("%d",&n);
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			long long temp;
			temp = (i*j)*(i*j);
			long long mod = temp%7;
			if(mod == 0 || mod == 1 || mod == 3 || mod == 6)
				a[i][j] = 0;
			else
				a[i][j] = 1;
		}
	}
	
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			b[j][n+1-i] = a[i][j]; 
		}
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			c[n+1-i][n+1-j] = a[i][j];
		}
		
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			d[n+1-j][i] =  a[i][j];
		}
		
	}

	long long ans1 = 0;
	long long ans2 = 0;
	long long ans3 = 0;

	ans1 = diff(a,b,n);
	ans2 = diff(a,c,n);
	ans3 = diff(a,d,n);
	
	scanf("%d",&q);
	while(q--)
	{
		int temp;
		scanf("%d",&temp);
		if(temp%360 == 0)
			printf("0\n");
		if(temp%360 == 90)
			printf("%lld\n",ans1);
		if(temp%360 == 180)
			printf("%lld\n",ans2);
		if(temp%360 == 270)
			printf("%lld\n",ans3);


	}




}