#include<iostream>
#include<vector>
using namespace std;

vector<int> a;
int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    a.resize(n);
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
       
}