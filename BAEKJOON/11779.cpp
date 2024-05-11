#include<iostream>
#include<queue>
using namespace std;
#define INF 2100000000

struct s{bool visited; int earlier, distance;};

struct compare{
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }
};

vector<pair<int, int>> v[1001];
int N, M, head, tail, cost;

void dijkstra(){
    vector<s> table(N+1, {false, -1, INF});
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

    table[head] = {true, 0, 0};
    pq.push({head, 0});
    
    while(!table[tail].visited){
        int node = pq.top().first;
        int dist = pq.top().second;
        table[node].visited = true;
        pq.pop();

        for(int i = 0; i < v[node].size(); i++){
            auto next = v[node][i];
            int next_node = next.first;
            if(!table[next_node].visited){
                int sum_of_dist = dist + next.second;
                if(table[next_node].distance > sum_of_dist){
                    table[next_node].earlier = node;
                    table[next_node].distance = sum_of_dist;
                    pq.push({next_node, sum_of_dist});
                }
            }
        }
    }

    vector<int> ans;
    ans.push_back(tail);

    while(ans.back() != head)
        ans.push_back(table[ans.back()].earlier);

    cout << table[tail].distance << '\n';
    cout << ans.size() << '\n';
    while(!ans.empty()){
        cout << ans.back() << ' ';
        ans.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> head >> tail >> cost;
        v[head].push_back({tail, cost});
    }

    cin >> head >> tail;

    dijkstra();
}