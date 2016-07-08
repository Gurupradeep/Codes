#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main()
{
	int a[6];
	for(int i=1;i<=4;i++)
		cin>>a[i];
	long long count =0;

	sort(a+1,a+5);
	for(int p=1;p<=a[1];p++)
		for(int q=p;q<=a[2];q++)
			for(int r=q;r<=a[3];r++)
				for(int s=r;s<=a[4];s++)
				{
                    long long x = p^q;
                    long long y = r^s;
                    long long z = x^y;
					if(z!=0)
                    {
						count++;
                       //cout<<count<<" "<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
                    }
				}
	cout<<count<<endl;

}
