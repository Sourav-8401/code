#include <iostream>
#include <list>
#include <vector>
#include <stack>
using namespace std;
class Graph{
    int v; 
    list<int> adj;
};
Graph::Graph(v){
    this->v = v; 
    adj = new list<int> [v];
}
void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}
void Graph:: dfs(int s){
    vector<bool> visited(v,false);
    stack<int> stack;
    stack.push(s);
    while(!stack.empty()){

    }
}
int main(){
    int snode, enode;
    int v; cin>>v;
    list<int> nodes;
    Graph g1;
    for(int i=0; i<v; i++){
        cin>>snode>>enode;
        g1.addEdge(snode,enode);
    }
    g1.dfs(snode);

}q