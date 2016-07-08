#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
	long long t;
	scanf("%lld",&t);
	long long k,a[22];
	for(int i=1;i<19;i++)
		a[i] = pow(5,i);
	while(t--)
	{
		long long pos, res = 0;
		scanf("%lld",&k);
		for(int i=1;i<18;i++)
		{
			if(a[i]<=k&&k<a[i+1])
			{
				pos  = i;
				break;
			}
		}
		if(k<5)
		{
			printf("%lld\n",(k-1)*2);
		}
		else
		{
			while(pos>0)
			{
				long long divi = k/a[pos];
				k = k%a[pos];
				if(k==0)
				{
					res+=2*(divi-1)*pow(10,pos) + pow(10,pos);
					long long red  = 0;
					for(int i=1;i<pos;i++)
						red+=pow(10,i);
					red +=2;
					res = res - red;
				}
				else
                {
                	res += 2*(divi)*pow(10,pos);
                	if(k<a[1])
                	{

                		res+=2*(k-1);
                		break;
                	}

                }
                while(pos>0)
                {
                	if(a[pos]<=k && k<a[pos+1]){
                		break;
                	}
                	pos--;
                }
			}
			printf("%lld\n",res);
		}

	}
}
