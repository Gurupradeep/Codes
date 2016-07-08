#include <iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int factorial(int n);
int main()
{
    int t,i,c,r,k,f;
    vector<int>a;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<11;i++)
            {
                scanf("%d",&f);
                a.push_back(f);
        }
        sort(a.rbegin(),a.rend());
        scanf("%d",&k);

        c=count(a.begin(),a.begin()+k,a[k-1]);

        r=count(a.begin(),a.begin()+11,a[k-1]);

        printf("%d\n",(factorial(r))/(factorial(r-c)*factorial(c)));

        a.clear();
    }
    return 0;
}
int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
