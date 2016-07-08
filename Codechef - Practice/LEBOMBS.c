#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		char a[10002];
		int b[1002];
		cin>>n;
		scanf("%s",a);
		for(int i=0;i<n;i++)
			b[i]=0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				if(a[i]=='1')
					{
						b[i]=1;
						b[i+1]=1;
					}
			}
			else if(i==n-1)
			{
				if(a[i]=='1')
					{
						b[i-1]=1;
						b[i]=1;
					}
			}
			else
			{
				if(a[i]=='1')
				{
					b[i+1]=1;
					b[i-1]=1;
					b[i]=1;

				}
			}

		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]==0)
				ans+=1;
		}
		cout<<ans<<endl;
	}
}
