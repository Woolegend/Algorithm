#include<iostream>
#include<vector>
using namespace std;
#define INF 2147483647

int V, E, a, b, c;
vector<pair<int, int>> graph[10001];
bool visited[10001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> V >> E;

    for(int i = 0; i < E; i++){
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    for(int i = 1; i <= V; i++){
        sort(graph[i].begin(), graph[i].end(), greater<pair<int, int>>());
    }
}