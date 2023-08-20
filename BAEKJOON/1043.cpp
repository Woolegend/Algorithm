/*
백준 1043

1. 진실을 아는 사람이 있는 파티에서는 참말
2. 진실을 모르는 사람이 있는 파티에서는 거짓말
3. 두 파티 모두 참석하는 사람들에게도 참말

#해결방법#
1. 진실을 아는 사람과 같은 파티에 참석한 사람들은 모두 진실을 아는 사람

*/

#include<iostream>
#include<queue>
using namespace std;

int n, m, w, v, num, ans;
bool withness[51], truth[50];
vector<int> people_v[51], party_v[50];
queue<int> party_q, people_q;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> w;
    for(int i = 0; i < w; i++){
        cin >> num;
        withness[num] = true;
        people_q.push(num);
    }

    for(int i = 0; i < m; i++){
        cin >> v;
        for(int j = 0; j < v; j++){
            cin >> num;
            people_v[num].push_back(i);
            party_v[i].push_back(num);
        }
    }

    ans = m;
    while(!party_q.empty() || !people_q.empty()){

        while(!people_q.empty()){
            int front = people_q.front();
            people_q.pop();
            for(int i = 0; i < people_v[front].size(); i++){
                int party = people_v[front][i];
                if(!truth[party]){
                    truth[party] = true;
                    party_q.push(party);
                    ans--;
                }
            }
        }

        while(!party_q.empty()){
            int front = party_q.front();
            party_q.pop();
            for(int i = 0; i < party_v[front].size(); i++){
                int people = party_v[front][i];
                if(!withness[people]){
                    withness[people] = true;
                    people_q.push(people);
                }
            }
        }
    }

    cout << ans;
}