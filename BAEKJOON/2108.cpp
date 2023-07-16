#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    vector<int> v;
    vector<int> f;
    int n, in, fre, fre_max, ran, avg;
    float sum;
    scanf("%d", &n);

    sum = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &in);
        v.push_back(in);
        sum += in;
    }
    sort(v.begin(), v.end(), less<int>());

    avg = round(sum/n);

    fre_max = 0;
    for(int i = 0; i<v.size(); i++){
        fre = 1;
        while(i + 1 < v.size()){
            if(v[i] == v[i+1]) fre++;
            else break;
            i++;
        }
        if(fre > fre_max){
            fre_max = fre;
            f.clear();
            f.push_back(v[i]);
        }
        else if(fre == fre_max)
            f.push_back(v[i]);
    }
    cout << avg << endl;
    cout << v[n/2] << endl;
    cout << (f.size() > 1 ? f[1] : f[0]) << endl;
    cout << v.back() - v.front();
}