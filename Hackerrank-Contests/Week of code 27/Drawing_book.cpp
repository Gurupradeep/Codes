#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,p;
	cin>>n>>p;

	int front;

	front = ceil((p-1)/2.0);

	cout<<"front"<<" "<<front<<endl;
	int back;

	if(n%2==0)
	{
		back = ceil((n-p)/2.0);
	}
	else
		back = floor((n-p)/2.0);
	cout<<back<<endl;

	int ans = min(back,front);
	cout<<ans<<endl;
}