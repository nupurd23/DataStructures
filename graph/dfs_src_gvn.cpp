#include<iostream>
#include<vector>
using namespace std;

void DFSRec(vector<int>adj[],int s, bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    for(int u :adj[s]){
        if(visited[u]==false){
            DFSRec(adj,u,visited);
        }
    }
}

void DFS(vector<int>adj[] , int v ,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
       
    }
     DFSRec(adj,s,visited);
}

void addedge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


int main(){
    int v=4;
    int s =0;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
    DFS(adj,v,s);

    return 0;
}