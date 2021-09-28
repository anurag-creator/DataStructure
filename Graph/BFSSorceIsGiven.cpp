#include<bits/stdc++.h>
using namespace std;
void BFSSourceIsGiven(vector<int>adj[],int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++)
          visited[i]=false;
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);

	cout << "Breadth First Traversal : "<< endl; 
	BFSSourceIsGiven(adj,V,0); 

	return 0; 
} 