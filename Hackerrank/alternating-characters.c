#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,j,count;
    char a[100003];

    scanf("%d",&t);
    while(t--)
        {
           scanf("%s",a);
            count=0;
           for(i=0;a[i]!='\0';i++)
               {
               if(a[i]==a[i+1])
                   {
                   count++;


               }
           }
           printf("%d\n",count);
    }
    return 0;
}
