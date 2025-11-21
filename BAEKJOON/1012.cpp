#include<iostream>
using namespace std;

int arr[50][50];
int T, N, M, K;

void search(int y, int x){
    if(arr[y][x]) {
        arr[y][x] = 0;
        if(y > 0) search(y - 1, x);
        if(y + 1 < N) search(y + 1, x);
        if(x > 0) search(y, x - 1);
        if(x + 1 < M) search(y, x + 1);
    }
}

int solve(){
    int cnt = 0;
    for(int y = 0; y < N; y++) {
        for(int x = 0; x < M; x++) {
            if(arr[y][x]){
                cnt++;
                search(y, x);
            }
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int x, y;

    cin >> T;

    while(T--) {
        cin >> M >> N >> K;
        while(K--) {
            cin >> x >> y;
            arr[y][x] = 1;
        }
        cout << solve() << '\n';
    }
}


// #include<ios>
// int A[50][50],r,t,m,n,k,x,y;
// void s(int a, int b){ 
//     if(a<0||a>=m||b<0||b>=n||!A[b][a])return;
//     A[b][a]=0;
//     s(a+1,b); s(a-1,b); s(a,b+1); s(a,b-1);
// }
// int main(){
//     scanf("%d",&t);
//     while(t--){
//         scanf("%d %d %d",&m,&n,&k);
//         r = 0;
//         while(k--){
//             scanf("%d %d",&x,&y);
//             A[y][x]=1;
//         }
//         for(int i=0;i<n;i++){
//             for(int l=0;l<m;l++)
//                 if(A[i][l]) s(l,i), r++;
//         }
//         printf("%d\n",r);
//     }
// }