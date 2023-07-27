#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    vector<int> f;
    int n, in, sum, avg, mid, fre, fre_max, ran;

    scanf("%d", &n);

    sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &in);
        sum += in;
        v.push_back(in);
    }
    sort(v.begin(), v.end(), less<int>());

    avg = round(float(sum) / n);
    mid = v[n / 2];
    ran = v.back() - v.front();

    fre_max = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == v[i-1]) continue;
        fre = upper_bound(v.begin(), v.end(), v[i]) - lower_bound(v.begin(), v.end(), v[i]);
        if(fre_max < fre){
            fre_max = fre;
            f.clear();
            f.push_back(v[i]);
        }
        else if(fre_max == fre){
            f.push_back(v[i]);
        }
    }

    cout << avg << endl;
    cout << mid << endl;
    if(f.size() > 1) cout << f[1] << endl;
    else cout << f[0] << endl;
    cout << ran << endl;
}