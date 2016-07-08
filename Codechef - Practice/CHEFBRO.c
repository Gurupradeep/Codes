#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int c,n,m;
	    int ans=0;
	    cin>>c;
	    while(c--)
	    {
	        cin>>n>>m;
	        ans=ans^(n+m-2)%3;
	    }
	    if(ans==0)
	        cout<<"Football"<<endl;
	    else
	        cout<<"MasterChef"<<endl;

	}

	return 0;
}
