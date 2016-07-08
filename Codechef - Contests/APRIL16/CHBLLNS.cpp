#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long r,g,b;
		cin>>r>>g>>b;
		long long k;
		cin>>k;
		long long ans=0;
		if(r>=k)
			ans+=k-1;
		else
			ans+=r;
		if(g>=k)
			ans+=k-1;
		else
			ans+=g;
		if(b>=k)
			ans+=k-1;
		else
			ans+=b;
		cout<<ans+1<<endl;


	}
}
