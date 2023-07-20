#include<bits/stdc++.h>
using namespace std;

const int N =1e5+2;
bool vis[N];  //visited array
vector<int> adj[N];   //adjecny list

int main()
{   
    for(int i=0; i<N; i++)  // visited array initialize by 0
    {
       vis[i]= 0;
    }

    //take input no of Edages, nodes
    //Number of nodes (n): 
    //Number of edges (m): 
    int n, m;
    cin >>n >>m;

    int x, y;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

      queue<int> q;
      q.push(1);
      vis[1] = true;

      while(!q.empty())
      {
        int node = q.front();
        q.pop();
        cout<<node<<endl;

        vector<int> :: iterator it;

        for(it= adj[node].begin(); it != adj[node].end(); it++)
        {
            if(!vis[*it])
            {
                vis[*it] = 1;
                q.push(*it);
            }
        }
      }

    return 0;
}