#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,ans,rem;
    long long int num,temp;
    scanf("%d",&t);

    while(t--)
        {
        scanf("%lld",&num);
        temp=num;
        ans=0;
        {
            do{
                rem=num%10;
                num=num/10;
                if(rem!=0)
                    {
                if(temp%rem==0)
                    ans++;
                }
            }
            while(num!=0);
            printf("%d\n",ans);
        }

    }
    return 0;
}
