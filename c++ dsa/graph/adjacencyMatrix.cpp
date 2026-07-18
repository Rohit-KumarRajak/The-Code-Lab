#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of vertices:";
    cin>>n;
    cout<<"Enter number of edges:";
    cin>>m;
    int adj[n+1][n+1]={};
    cout<<"Enter your edges{ex:if the edge is 2->3 then you have to 2 then space then 3}"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cout<<"your graph looks like:"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}