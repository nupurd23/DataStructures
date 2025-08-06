#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(vector<int>adj[],int v,int s,bool visited[]){
    queue<int>q;
visited[s]=true;
q.push(s);
while(q.empty()==false){
    int u=q.front();
    q.pop();
    cout<<u<<" ";
    for(int v : adj[u]){
        if(visited[v]==false){
            visited[v]=true;
            q.push(v);
        }
    }
}
}

void BFSDis(vector<int>adj[],int v){
    int count =0;
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            BFS(adj,v,i,visited);
            count++;
        }
    }
    cout<<"No of island "<<count;
}

int main() {
    int v = 5;
    vector<int> adj[v];

    adj[0].push_back(1);
    adj[1].push_back(0);
    
    adj[2].push_back(3);
    adj[3].push_back(2);

    BFSDis(adj, v);
    
    return 0;
}
