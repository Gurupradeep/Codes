#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,a[100][100],sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
     for(i=0;i<n;i++)
        sum1=sum1+a[i][i];
      for(i=0;i<n;i++)
        sum2=sum2+a[i][n-i-1];
       printf("%d",abs(sum2-sum1));

    return 0;
}
