// https://www.hackerrank.com/challenges/the-chosen-one
//Idea : To find the gcd of all numbers other than this one and check if it is a divisor
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	int a[100006];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);

	int front[100006];
	int back[100006];
	front[1] = a[1];
	back[n] = a[n];
	for(int i=2;i<=n;i++)
		front[i] = __gcd(front[i-1],a[i]);

	for(int i=n-1;i>=1;i--)
		back[i] = __gcd(back[i+1],a[i]);

	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			if(a[i]%back[i+1]!=0)
			{
				printf("%d\n",back[i+1]);
				break;
			}
		}
		else if(i==n)
		{
			if(a[i]%front[i-1]!=0)
			{
				printf("%d\n",front[i-1]);
				break;
			}
		}
		else
		{
			int temp =__gcd(front[i-1],back[i+1]);
			if(a[i]%temp!=0)
			{
				printf("%d\n",temp);
				break;
			}
		}
	}


}