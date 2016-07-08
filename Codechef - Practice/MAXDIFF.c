#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		long long a[10002];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		long long father=0;
		long long son=0;
		int temp;
		if(k<n-k)
			temp=k;
		else
			temp=n-k;
		for(int i=0;i<temp;i++)
			son+=a[i];
		for(int i=temp;i<n;i++)
			father+=a[i];
		cout<<father-son<<endl;

	}
}
