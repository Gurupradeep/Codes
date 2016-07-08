#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t, n, c, m,k,j;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0;
        /** Write the code to compute the answer here. **/
        k=n/c;
        j=k/m;
        answer=k+j;
             while((k/m+k%m)/m!=0)
               {
                     k=k/m+k%m;

                    answer=answer+k/m;

               }
        printf("%d\n",answer);
    }
    return 0;
}
