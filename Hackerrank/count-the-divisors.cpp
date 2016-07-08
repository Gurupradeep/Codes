#include <iostream>
using namespace std;
int main() {
     int n, other;
     cin>>n;

     int result = 0;
    int j = 1;

     while(j *j<= n){
      if(n%j == 0){
        result = result + 1;
        if(n/j!=j)
          result=result+1;
      }
      j++;
    }

     cout<<result<<endl;
   return 0;
}


