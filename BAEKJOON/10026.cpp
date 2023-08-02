#include<iostream>
using namespace std;

string grid[100];
int n, normal, weak;

int search(int a, int b, char c, char d){
    if(grid[a][b] != c) return 0;

    grid[a][b] = d;
    if(a > 0) search(a - 1, b, c, d);
    if(a + 1 < n) search(a + 1, b, c, d);
    if(b > 0) search(a, b - 1, c, d);
    if(b + 1 < n) search(a, b + 1, c, d);

    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> grid[i];

    for(int y = 0; y < n; y++){
        for(int x = 0; x < n; x++){
            normal += search(y, x, 'B', 'b');
            normal += search(y, x, 'G', 'y');
            normal += search(y, x, 'R', 'y');
        }
    }

    for(int y = 0; y < n; y++){
        for(int x = 0; x < n; x++){
            weak += search(y, x, 'y', '0');
            weak += search(y, x, 'b', '0');
        }
    }

    cout << normal << " " << weak;
}