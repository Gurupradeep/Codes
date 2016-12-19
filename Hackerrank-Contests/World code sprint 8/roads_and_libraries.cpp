#include<bits/stdc++.h>

using namespace std;

vector<int>adjlist[100006];
int visited[100006];

int sum;

void bfs(int i)

{

	queue <int> q;

	q.push(i);

	visited[i]=1;

	sum++;

	while(!q.empty())

	{

		int k=q.front();

		q.pop();

		for(int j=0;j<adjlist[k].size();j++)
		{
           
			if(visited[adjlist[k][j]]==0)
			{

				q.push(adjlist[k][j]);
                visited[adjlist[k][j]]=1;
                sum++;
			}

		}

	}

}



int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    scanf("%d",&q);
    while(q--)
    {
    	sum = 0;
    	int ve, ed , lib, r;
    	scanf("%d %d %d %d",&ve,&ed,&lib,&r);
    	for(int i=1;i<=ve;i++)
    	{
    		visited[i] = 0;
    		adjlist[i].clear();
    	}
    	for(int i=1;i<=ed;i++)
    	{
    		int u,v;
    		scanf("%d %d",&u,&v);
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
    	}
    	long long ans = 0;
    	for(int i=1;i<=ve;i++)
    	{
    		if(visited[i] ==0)
    		{
    			int temp = sum;
    			bfs(i);
    			int n = sum - temp;
    			if(n==1)
    			{
    				ans = ans + lib;
    				//cout<<"1"<<" "<<ans<<endl;
    			}
    			else	
    			{

    				ans = ans + min((n-1)*r+lib,n*lib);

    			}
    		}
    	}
    	cout<<ans<<endl;

    }
}