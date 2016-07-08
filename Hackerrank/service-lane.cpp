#include <iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
int main()
{

    int n,t,i,en,et;
    int a[100000];
    scanf("%d %d",&n,&t);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(t--)
    {
        scanf("%d %d",&en,&et);
        printf("%d\n",*min_element(a+en,a+et+1));
    }

}
