#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[100006];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int max_value = 0;
    int max_index;
    int swap_count = 1;
    for(int i=1;i<=n && swap_count<=k ;i++ )
    {
        for(int j=i+1;j<=n;j++)
        {
            if(max_value < a[j])
            {
                max_value = a[j];
                max_index = j;
            }
        }
        if(a[i]<max_value)
        {
            swap(a[i],a[max_index]);
            swap_count++;
        }
        max_value = 0;
    }
    for(int i=1;i<=n;i++)
        printf("%d ",a[i]);
}
