#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long long int n,temp;
    scanf("%d",&t);
    while (t--)
        {
        scanf("%lld",&n);
        temp=n/2;
        printf("%lld\n",temp*(n-temp));
    }
    return 0;
}
