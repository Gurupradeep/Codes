#include <iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,d,i;
    set<int>s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>d;
            s.insert(d);
        }
        cout<<s.size()<<endl;
        s.clear();
    }
    return 0;
}
