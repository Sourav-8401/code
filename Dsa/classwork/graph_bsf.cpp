#include <iostream>
#include <list>
using namespace std;
class graph{
    int v;
    list <int> *adj;
    public:
        graph(int n){
            this->v = n;
            adj = new list<int>[n];
        };
        void addedge(int i, int data){
            adj[i].push_back(data);
        }; //i is the index of arr & data is the data
        void BFS(int s){
                bool* visited = new bool[v];
                 for(int i = 0; i<v; i++){
                    visited[i] = false;
                 }
                 list<int> queue;
                 visited[s] = true;
                 queue.push_back(s);
                 list<int> :: iterator i;
                 while(!queue.empty()){
                    s = queue.front();
                    cout<< s<<" ";
                    queue.pop_front();
                    for(i=adj[s].begin(); i != adj[s].end(); i++){
                        if(!visited[*i]){
                            visited[*i] = true;
                            queue.push_back(*i);
                        }
                    }
                 }
        };
};
int main(){
    int v, i, snode, enode, temp;
    cin>>v;
    if(v == 0){
        cout<<"Graph doesn't exist";
        return 0;
    }
    graph g(v);
    cin>>snode>>enode;
    while(snode != -1 && enode != -1){
        g.addedge(snode,enode);
        cin>> snode >> enode;
    }
    cout<<"BFS :";
    cin>>temp;
    g.BFS(temp);
    return 0;
}