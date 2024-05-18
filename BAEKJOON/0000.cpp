#include<iostream>
<<<<<<< HEAD
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    string answer = "";
    bool flag;
    while(true){
        getline(cin, s);
        if(s == "end") break;
        answer += "cout << \"";

        flag = false;
        for(char c:s){
            if(c == ' ') flag = true;
            else{
                if(flag){
                    flag = false;
                    cout << ' ';
                }
                cout << c;
            }
        }

        cout << "\" << endl;";
    }
}
=======
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
        vector<vector<int>> combinationSum(vector<int>& candidates, int target){
            vector<vector<int>> answer;
            vector<int> combination;

            sort(candidates.begin(), candidates.end(), less<int>());
            Backtracking(candidates, target, 0, combination, answer);

            return answer;
        }

        void Backtracking(vector<int>& candidates, int target, int start, 
                        vector<int>& combination, vector<vector<int>>& answer)
        {
            if(target == 0){
                answer.push_back(combination);
                return;
            }

            for(int i = start; i < candidates.size(); i++){
                if(target < candidates[i]) return;

                combination.push_back(candidates[i]);

                int nextTarget = target - candidates[i];
                Backtracking(candidates, nextTarget, i, combination, answer);

                combination.pop_back();
            }
        }
};
>>>>>>> 797c794ae12b9e412345bcba424ca741774d16b9
