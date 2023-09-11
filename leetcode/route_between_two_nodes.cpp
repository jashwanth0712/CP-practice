// 1:{4}
// 4:{2,3}
// 2:{5,4}
// 3:{}
// 5:{}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
map<int,set<int>> adjacency_list;
set<int> to_be_visited;

void printAdjacencyList(const map<int, set<int>>& adjacency_list) {
    cout<<endl<<"======================\n";
    for (const auto& entry : adjacency_list) {
        int node = entry.first;
        const set<int>& neighbors = entry.second;

        cout << node << ": ";
        for (int neighbor : neighbors) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}
bool bfs(int a ,int b){
    if(to_be_visited.size()<=0)
        return false;
    set<int> children = adjacency_list[a];
     // Displaying set elements
    for (auto itr = children.begin();itr != children.end(); itr++)
    {
        cout << *itr << " ";
        if(b==*itr)
            return true;
        to_be_visited.erase(*itr);
        bool temp= bfs(*itr,b);
        if(temp==true)
            return true;
    }
    return false;
}
int main() {
    int n = 0;
    cout <<"Enter the number of edges you want to enter: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int from, to;
        cin >> from >> to;
        adjacency_list[from].insert(to);
    }

    // Call the function to print the adjacency list
    printAdjacencyList(adjacency_list);
    int a,b;
    cout<<"\nEnter two nodes :";
    cin>>a;
    cin>>b;
    //from a to b
    for(int i=0;i<n;i++)
        to_be_visited.insert(i+1);
    //{1,2,3,4,5}
    bool value=bfs(a,b);
    cout<<"\nit is "<<value<<" that path exists";
    return 0;
}
