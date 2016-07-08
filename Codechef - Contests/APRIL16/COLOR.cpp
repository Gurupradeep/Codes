#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[100006];
		int n;
		cin>>n;
		cin>>a;
		int g=0,b=0,r=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='R')
				r++;
			else if(a[i]=='B')
				b++;
			else
				g++;
		}
		int ans = max(max(r,b),g);
		ans= n-ans;
		cout<<ans<<endl;
	}
}
