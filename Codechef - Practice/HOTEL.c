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
		cin>>n;
		int a[1005],p[1002],q[1002];
		for(int i=0;i<=1000;i++)
			a[i]=0;
		for(int i=1;i<=n;i++)
			cin>>p[i];
		for(int i=1;i<=n;i++)
			cin>>q[i];
		for(int i=1;i<=n;i++)
		{
			a[p[i]]++;
			a[q[i]]--;
		}
		int ans=0;
		int b[1002];
		b[0]=0;
		for(int i=1;i<=1000;i++)
		{
			b[i]=b[i-1]+a[i];
		}
        for(int i=0;i<=1000;i++)
        {
        	if(b[i]>ans)
        		ans = b[i];
        }
        cout<<ans<<endl;
	}


}
