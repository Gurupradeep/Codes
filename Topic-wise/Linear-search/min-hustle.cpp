/* Question : Given an array having NN integers, you need to find out a subsequence of KK integers such that these KK integers have the minimum hustle. Hustle of a sequence is defined as sum of pair-wise absolute differences divided by the number of pair
*/
//Link : https://tp-iiita.quora.com/The-Two-Pointer-Algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[100006];
	int sum[100006];
	int n;
	cin>>n;
	int k;
	cin>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	
	sum[0] = 0;

	for(int i=1;i<=n;i++)
		sum[i] =  a[i] + sum[i-1];
	int ans;
	int temp;

	int r = 2;
	int l = 1;
	temp = 0;
	while(r<=k)
	{
		temp = temp + (a[r]*(r-l) - (sum[r-1]+sum[l-1]));
	//	cout<<temp<<endl;	
		r++; 
	}
	ans = temp;
	while(r<=n)
	{
		temp -= (sum[r-1] - sum[l] - a[l]*(r-l-1));
		l++;
		temp += (a[r]*(r-l) - (sum[r-1]-sum[l-1]));
		if(ans > temp)
		{
			 ans = temp;
		}
		r++;
	}
	cout<<ans<<endl;
}


