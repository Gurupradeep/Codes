#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,ans,h;
    scanf("%d",&t);
    while(t--)
        {
        ans=1;
        scanf("%d",&n);
        ans=1;
        if(n!=0)
            {
             for(h=1;h<=n;h++)
                {
                if(h%2==0)
                    ans=ans+1;
                else
                    ans=ans*2;

            }
                printf("%d\n",ans);
        }
        else
            printf("%d\n",ans);
    }
    return 0;
}
