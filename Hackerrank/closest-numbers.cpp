#include<bits/stdc++.h>

using namespace std;

int main()

{
	int n;
	int a[2000006];

	cin >>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int min = 20000008;
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1] < min)
			min = a[i] - a[i-1];

	}

	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1] == min)
			printf("%d %d ",a[i-1],a[i]);

	}
}