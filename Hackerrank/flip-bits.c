#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long long int a;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%lld",&a);
        printf("%lld\n",4294967295-a);

    }
    return 0;
}
