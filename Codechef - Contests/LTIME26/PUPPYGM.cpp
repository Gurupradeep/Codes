#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int A,B;
    int t;
    cin>>t;
    while(t--)
    {
       cin>>A>>B;
       if(A%2==0||B%2==0)
        cout<<"Tuzik"<<endl;
       else
        cout<<"Vanka"<<endl;
    }
    return 0;
}
