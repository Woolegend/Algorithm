#include<iostream>
using namespace std;

string ISBM;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ISBM;

    bool is_odd = false;
    int sum = 0;
    for(int i = 0; i < ISBM.size() - 1; i++){

      if(ISBM[i] == '*') {
        is_odd = (i % 2 == 0) ? true : false;
        continue;
      }

      int num = ISBM[i] - '0';
      if(i % 2 == 0 )
        sum += (ISBM[i] - '0') * 1;
      else
        sum += (ISBM[i] - '0') * 3;
    }

    sum += ISBM[ISBM.size() - 1] - '0';
    int result = 0;
    
    for(int i = 1; i<10; i++){
      int candidate = (is_odd) ? i : i * 3;
      if((sum + candidate) % 10 == 0){
        result = i;
        break;
      } 
    }

    cout << result;
}