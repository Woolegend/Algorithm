#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int num;

    while(true){
      string tmp;
      cin >> tmp;
      if(cin.eof() == true) break;
      if(all_of(tmp.begin(), tmp.end(), ::isdigit)) num = stoi(tmp);
      else num++;
    }

    num++;
    if(num % 3 == 0 && num % 5 == 0)
      cout << "FizzBuzz";
    else if(num % 3 == 0)
      cout << "Fizz";
    else if(num % 5 == 0)
      cout << "Buzz";
    else 
      cout << num;
}