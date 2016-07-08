#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j;
    float a=0,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
          scanf("%d",&j);
          if(j>0)
              a++;
          if(j<0)
              b++;
        if(j==0)
            c++;
    }
    printf("%.3f\n%.3f\n%.3f\n",(a/n*1.0),(b/n*1.0),(c/n*1.0));
    return 0;
}
