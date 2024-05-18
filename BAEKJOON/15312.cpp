#include <iostream>
#include <vector>
using namespace std;

string A, B;
bool flag;
vector<int> arr[2];
int aph[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    cin >> A >> B;

    for (int i = 0; i < A.length(); i++)
    {
        int a = aph[A[i]-'A'];
        int b = aph[B[i]-'A'];

        arr[0].push_back(a);
        arr[0].push_back(b);
    }



    flag = false;
    while(arr[flag].size() != 2){
        arr[!flag].clear();
        for(int i = 0; i < arr[flag].size() - 1; i++){
            int a = arr[flag][i];
            int b = arr[flag][i+1];
            int c = (a + b) % 10;
            arr[!flag].push_back(c);
        }
        flag = !flag;
    }

    cout << arr[flag][0] << arr[flag][1];
}