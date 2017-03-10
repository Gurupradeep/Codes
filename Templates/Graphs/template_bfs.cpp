void bfs(int i)
{
	queue <int> q;
	q.push(i);
	visited[i]=1;
	while(!q.empty())
	{
		int k=q.front();
		q.pop();
		for(int j=0;j<list[k].size();j++)
		{
			if(visited[list[k][j]]==0)
			{
				q.push(list[k][j]);
				visited[list[k][j]]=1;
			}
		}
	}
}
