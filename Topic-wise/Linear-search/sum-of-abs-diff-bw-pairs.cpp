//Question :
// Sum of absolute differences of all pairs in a given array

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int ans = 0;
	for(int i=0;i<n;i+)
		sum = sum + (i*a[i] - (n-1-i)*a[i]);
	cout<<sum<<endl;
}