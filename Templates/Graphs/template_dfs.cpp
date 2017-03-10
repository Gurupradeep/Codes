void dfs(int i)
{
    stack<int> s;
    s.push(i);
    while(s.empty()==false)
    {
        int k=s.top();
        s.pop();
        if(visited[k]==false)
            visited[k]=true;
        else
        {
            continue;
        }
            for(int j=0;j<List[k].size();j++)
            {
                if(visited[List[k][j]==false)
                    visited[List[k][j]]=true;
                else
                    continue;
                s.push(List[k][j]);
            }
    }
}
