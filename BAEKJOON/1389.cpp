/*
백준 1389

#알고리즘#
1. 너비 우선 탐색(BFS)

#해결과제#
1. 그래프 생성
- 노드 s, e 입력
- graph[s]에 e 삽입
- graph[e]에 s 삽입

2. 너비 우선 탐색
- 시작 노드 선택
- 너비 우선 탐색 수행
- 큐에 노드 삽입 시 케빈 베이컨의 수도 같이 삽입
- ex) queue : {node1, 1}, {node2, 1}, {node3, 2} ...
- 큐에서 노드 pop할 때 해당 노드의 케빈 베이컨의 수를 확인
- 모든 노드의 케빈 베이컨의 수의 합을 반환

3. 케빈 베이컨의 수의 합 비교
- 최소 케빈 베이컨의 수를 가진 시작 노드 판단
- 최소 노드가 다수일 경우 노드가 가장 작은 값이 답
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> graph[101];

int bfs(int start){
    queue<pair<int, int>> q;
    bool visit[101];
    int cnt = 0, t;

    fill(visit, visit+101, false);

    q.push(make_pair(start, 0));
    visit[start] = true;

    while(!q.empty()){
        auto f = q.front();
        for(int i = 0; i<graph[f.first].size(); i++){
            t = graph[f.first][i];
            if(!visit[t]){
                visit[t] = true;
                q.push(make_pair(t, f.second + 1));
            }
        }
        cnt += f.second;
        q.pop();
    }

    return cnt;
}

int main(){
    int n, m, s, e, r, min = 5000000, min_num;
    scanf("%d %d", &n, &m);

    for(int i = 0; i<m; i++){
        scanf("%d %d", &s, &e);
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    for(int i = 1; i<=n; i++){
        r = bfs(i);
        if(r < min){
            min = r;
            min_num = i;
        }
    }

    cout << min_num;
}
