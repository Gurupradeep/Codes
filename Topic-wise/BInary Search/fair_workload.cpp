#include <bits/stdc++.h>

using namespace std;


int check(int a[],int n,int workers,int x)
{
	int count = 1;
	int load = 0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]+load <= x)
		{
			load = load + a[i];
		}
		else
		{
			load = a[i];
			count++;
		}
	}
	if(count<=workers)
	{
		//cout<<"VALUE"<<" "<<x<<"Count"<<" "<<count<<endl;
		return 1;
	}
	else
		return 0;
}

int main()
{
	int a[1000],n,workers;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>workers;
	int low = *max_element(a+1,a+n+1);
	int high = accumulate(a+1,a+n+1,0);
//	cout<<high<<endl;
	int ans;
//	cout<<"check"<<" "<<check(a,n,workers,169)<<endl;
	while(low<=high)
	{
		int mid = (low+high)/2;
	//	cout<<"mid"<<" "<<mid<<endl;
		if(check(a,n,workers,mid) == 1 && check(a,n,workers,mid-1)==0)
		{
			ans = mid;
			break;
		}
		else if(check(a,n,workers,mid) == 1)
		{
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
	cout<<ans<<endl;

}