#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int a[106];
  cin>>n;
  for(int i=0;i<=100;i++)
    a[i] = 0;
  while(n--)
  {
      int temp;
      cin>>temp;
      a[temp]++;
  }
  int maximum = -1;
  int sum = 0;
  for(int i=0;i<=100;i++)
  {
      sum = sum + a[i];
      maximum = max(maximum,a[i]);
  }
  cout<<sum - maximum<<endl;
}
