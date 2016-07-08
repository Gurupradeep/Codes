#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r);



int main() {
    int res;
    int _l;
    scanf("%d", &_l);

    int _r;
    scanf("%d", &_r);

    res = maxXor(_l, _r);
    printf("%d", res);

    return 0;
}
int maxXor(int l, int r)
    {
    int h,max,k;
    max=l^r;
    for(h=l;h<=r;h++)
        {
        for(k=h;k<=r;k++)
            {
            if((k^h)>=max)
                max=k^h;

        }
    }
    return max;
}
