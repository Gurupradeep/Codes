#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[200002],b[22],c[22];
		for(int i=0;i<=20000;i++)
			a[i]=0;
		a[0]=1;
		int n,m;
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++)
			{
				scanf("%d",&b[i]);
				for(int j=m;j>=0;j--)
				{
					if(a[j])
						a[j+b[i]]=1;
				}

			}
		if(a[m])
			printf("Yes\n");
		else
			printf("No\n")
;

	}
}
Comments
