#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#define MAX 11


vector<int> graph[MAX];

void solve(int a, int b, int c) {
	for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            if(a*i + b*j == c){
                graph[i].push_back(j);
            }
        }
        if(graph[i].size() == 0){
            graph[i].push_back(0);
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, C;

	cin >> A >> B >> C;

	solve(A, B, C);

	for(int i = 1; i <= 10; i++){
        for(int j = 0; j < graph[i].size(); j++){
            cout << graph[i][j];
			if(j < graph[i].size() - 1) cout << ' ';
        }
        if(i < 10) cout << "\n";
    }
}