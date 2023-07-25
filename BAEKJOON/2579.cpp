#include<iostream>
using namespace std;

int 
    stair[300],
    n;

int step(int a, int c){
    if(a >= n) return -3000000; 
    if(a == n - 2 && c == 2) return -3000000;
    if(a == n - 1) return stair[n - 1];

    int x, y, max;

    if(c < 2) {
        x = step(a + 1, c + 1);
        y = step(a + 2, 0);
        max = x > y ? x : y;
    }
    else max = step(a + 2, 0);

    return stair[a] + max;

}

int main(){
    scanf("%d", &n);

    for(int i = 0; i<n; i++)
        scanf("%d", &stair[i]);

    cout << step(0, 0) << endl;
}