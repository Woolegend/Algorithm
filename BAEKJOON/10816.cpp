// 백준 10816
//

// #오류#
// 1. map사용 시간 초과

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v1;
vector<int> v2;
int n, m, temp, cnt, minn, maxx, mid;
bool flag;

void lower(int p){
    if(p == 0) return;
    if(v1[p] == v1[p-1]){
        cnt++;
        lower(p-1);
    }
}

void upper(int p){
    if(p == n) return;
    if(v1[p] == v1[p+1]){
        cnt++;
        upper(p+1);
    }
}

int main(){
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &temp);
        v1.push_back(temp);
    }
    sort(v1.begin(), v1.end(), less<int>());

    scanf("%d", &m);
    for(int i = 0; i<m; i++){
        scanf("%d", &temp);

        cnt = 0;
        minn = -1;
        maxx = n;

        while(minn + 1 != maxx){
            mid = (minn + maxx) / 2;
            if(v1[mid] < temp)
                minn = mid;
            else if(v1[mid] > temp)
                maxx = mid;
            else{
                cnt++;
                lower(mid);
                upper(mid);
                break;
            }
        }
        v2.push_back(cnt);
    }

    for(int i = 0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
}

