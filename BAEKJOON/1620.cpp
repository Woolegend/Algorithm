#include<iostream>
#include<map>
#include<string>

int main(){
    std::ios::sync_with_stdio(false);
	std::cin.tie(0);

    std::map<int, std::string> m1;
    std::map<std::string, int> m2;

    std::string s;
    int n, m;

    std::cin >> n >> m;

    for(int i = 1; i <= n; i++){
        std::cin >> s;
        m1.insert({i, s});
        m2.insert({s, i});
    }

    for(int i = 0; i < m; i++){
        std::cin >> s;
        if(isdigit(s[0]))
            std::cout << m1[stoi(s)] << "\n";
        else
            std::cout << m2[s] << "\n";
    }
}