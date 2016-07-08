#include <iostream>
#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    int q,a,b,i;
    char arr[1002];
    scanf("%s",arr);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d %d",&a,&b);
        reverse(arr+a,arr+b+1);
        printf("%s\n",arr);
    }
    return 0;
}
