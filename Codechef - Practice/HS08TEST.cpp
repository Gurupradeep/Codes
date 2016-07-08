#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    float t;
    int x;
    scanf("%d %f",&x,&t);
    if(x+.50 > t || x%5!=0)
        printf("%f",t);
     else
        printf("%f",t-x-.50);
    return 0;
}
