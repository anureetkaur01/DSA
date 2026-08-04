class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
       for(int i=0;i<edges.size();i++){
    int s=edges[i][0];
    int d=edges[i][1];
        adj[s].push_back(d);
        adj[d].push_back(s);
       }
       vector<bool>visited(n,false);
       return checkpath(adj,source,destination,visited);
    }
    bool checkpath(vector<int>adj[],int source,int destination,vector<bool>&visited){
       visited[source]=true;
        if(source==destination)
        return true;
        for(auto c:adj[source]){
            if(!visited[c])
          { bool resp=checkpath(adj,c,destination,visited);
           if(resp)
           return true;
           else continue;
           }
        }
        return false;
    }
};