#include<iostream>
#include<vector>
using namespace std;

int N, T, P;
vector<int> tshirts;
const int SIZE = 6;

void input(){
  cin >> N;
  for(int i=0; i < SIZE; i++){
    int tmp;
    cin >> tmp;
    tshirts.push_back(tmp);
  }
  cin >> T >> P;
}

void tshirts_solve(){ 
  int sets = 0;
  for(int i = 0; i<tshirts.size(); i++){
    int tmp = tshirts[i];
    int count =  tmp / T + (tmp % T > 0);
    sets += count;
  }
  cout << sets << "\n";
}

void pens_solve(){
  int sets = N / P;
  int mod = N % P;
  cout << sets << ' ' << mod;
}

int main(){
  ios::sync_with_stdio(false); 
  cin.tie(NULL);
  cout.tie(NULL);
  input();
  tshirts_solve();
  pens_solve();
}