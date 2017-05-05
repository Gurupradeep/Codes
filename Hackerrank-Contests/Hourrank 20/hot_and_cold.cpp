#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int n = max(a,b);
	int m = min(c,d);
	if(m-n>=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}