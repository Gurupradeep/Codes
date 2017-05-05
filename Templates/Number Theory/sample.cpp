#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long fact[500006];
long long modular(long long a,long long b, long c)
{
	long long ans = 1;
	while(b>0)
	{
		if(b%2 == 1)
		{
			ans = (ans*a)%c;
		}
		a = (a*a)%c;
		b = b/2;
	}
	return ans;
}
void factorial()
{
	fact[1] = 1;
	fact[0] = 1;
	for(int i=2;i<=500006;i++)
	{
		fact[i] = (fact[i-1]*i)%MOD;
	}
}
long long inv[500006];
void inverse()
{
	for(int i=0;i<=500006;i++)
	{
		inv[i] = modular(fact[i],MOD-2,MOD);
	}
}
long long compute(int p,int i)
{
	//cout<<"fact"<<fact[p]<<" "<<inv[p-i]<<" "<<inv[i]<<endl;
	return (((fact[p]*inv[p-i])%MOD)*inv[i])%MOD;	
}
int main()
{
	int q;
	factorial();
	inverse();
	scanf("%d",&q);
	while(q--)
	{
		string a;
		cin>>a;
	//	cout<<a<<endl;
		int p=0,q=0,r=0,s=0;
		for(int i=0;i<a.size();i++)
		{
			if(a[i] == 'a')
				p++;
			if(a[i] == 'b')
				q++;
			if(a[i] == 'c')
				r++;
			if(a[i] == 'd')
				s++;
		}
		long long ans1 = 0;
	//	cout<<p<<" "<<q<<" "<<" "<<r<<" "<<s<<endl;
	//	cout<<compute(1,1)<<endl;
		for(int i=1;i<=min(p,q);i++)
		{
			ans1 = (ans1 + (compute(p,i)*compute(q,i))%MOD)%MOD;
		}
	//	cout<<ans1<<endl;
		long long ans2 = 0;
		for(int i=1;i<=min(r,s);i++)
		{
			ans2 = (ans2 + (compute(r,i)*compute(s,i))%MOD)%MOD;
		}
	//	cout<<ans2<<endl;
		long long ans;
		ans = (ans1 * ans2)%MOD;
		ans = (ans + (ans1+ans2)%MOD)%MOD;
		cout<<ans<<endl;
	}
}