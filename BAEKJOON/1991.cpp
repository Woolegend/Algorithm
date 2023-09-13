#include<iostream>
using namespace std;

int n, aph[27][2];
char P, L, R;

int AtoI(char c){
    if(c == '.') return 0;
    return c - 'A' + 1;
}

char ItoA(int a){
    return a + 'A' - 1;
}

void Preorder(int a){
    if(a == 0) return;
    cout << ItoA(a);
    Preorder(aph[a][0]);
    Preorder(aph[a][1]);
}

void Inorder(int a){
    if(a == 0) return;
    Inorder(aph[a][0]);
    cout << ItoA(a);
    Inorder(aph[a][1]);
}

void Postorder(int a){
    if(a == 0) return;
    Postorder(aph[a][0]);
    Postorder(aph[a][1]);
    cout << ItoA(a);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> P >> L >> R;
        aph[AtoI(P)][0] = AtoI(L);
        aph[AtoI(P)][1] = AtoI(R);
    }
    
    Preorder(1);
    cout << '\n';
    Inorder(1);
    cout << '\n';
    Postorder(1);
}