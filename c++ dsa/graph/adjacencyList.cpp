#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter total number of vertices:";
    cin>>n;
    cout<<"Enter number of edges:";
    cin>>m;
    vector<vector<int>> adj(n);
    cout<<"Enter your graph edes like 3 4 means there is edge between 3 and 4"<<endl;
    for(int i=0;i<m;i++){
        int src,dest;
        cin>>src>>dest;
        adj[src].push_back(dest);
        adj[dest].push_back(src);
    }
    cout<<"your graph looks like:"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}