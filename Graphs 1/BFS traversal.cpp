/*
BFS Traversal
Given an undirected and disconnected graph G(V, E), print its BFS traversal.

Note:
1. Here you need to consider that you need to print BFS path starting from vertex 0 only. 
2. V is the number of vertices present in graph G and vertices are numbered from 0 to V-1. 
3. E is the number of edges present in graph G.
4. Take graph input in the adjacency matrix.
5. Handle for Disconnected Graphs as well

Input Format :
The first line of input contains two integers, that denote the value of V and E.
Each of the following E lines contains space separated two integers, that denote that there exists an edge between vertex a and b.

Output Format :
Print the BFS Traversal, as described in the task.

Constraints :
0 <= V <= 1000
0 <= E <= (V * (V - 1)) / 2
0 <= a <= V - 1
0 <= b <= V - 1

Time Limit: 1 second

Sample Input 1:
4 4
0 1
0 3
1 2
2 3

Sample Output 1:
0 1 3 2
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
    // Write your code here
    int v,e;
    cin >> v >> e;
    
    vector<vector<bool>> edges(v, vector<bool>(v, false));
    
    for(int i = 0; i < e; ++i) {
        int first;
        int second;
        cin >> first >> second;
        edges[first][second] = true;
        edges[second][first] = true;
    }
    
    vector<bool> visited(v, false);
    
    queue<int> q;
    
    // If the graph is a connected component graph 
    // We Call BFs for each Component
    for(int i = 0; i < v ; i++) {
        if(!visited[i]) {
            q.push(i);
            visited[i] = true;
            while(!q.empty()) {
        		int front = q.front();
        		q.pop();
        		cout << front << " ";
        
        		for(int i = 0; i < v; i++) {
            		if(edges[front][i] and !visited[i]) {
                		q.push(i);
                		visited[i] = true;
            		}
        		}
    		}
    	}
    }
    
}

// Time Complexity : O(V^2)
// Auxillary Space : O(V)
