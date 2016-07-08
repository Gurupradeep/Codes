#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector< pair< char, char> >v;
        long long a[1006];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            v.push_back(make_pair(a,a));
        }
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            v[i].second=a;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].first==v[i].second)
                count++;
        }

        for(int i=0;i<=n;i++)
            cin>>a[i];
            long long ans;
            if(count!=n)
                ans=*(max_element(a,a+count+1));
            else
                ans=a[n];

        cout<<ans<<endl;

    }
    return 0;
}
