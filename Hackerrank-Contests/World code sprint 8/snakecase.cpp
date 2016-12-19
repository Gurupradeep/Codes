#include<bits/stdc++.h>

using namespace std;

int main()
{
	char a[102];
	scanf("%s",a);
	int ans = 1;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i] == '_')
		{
			ans++;
		}

	}
	cout<<ans<<endl;
}