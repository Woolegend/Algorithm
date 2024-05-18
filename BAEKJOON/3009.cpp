#include <iostream>
using namespace std;

int arr[3][2], x, y;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < 3; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    if(arr[0][0] == arr[1][0]) x = arr[2][0];
    else if(arr[1][0] == arr[2][0]) x = arr[0][0];
    else x = arr[1][0];

    if(arr[0][1] == arr[1][1]) y = arr[2][1];
    else if(arr[1][1] == arr[2][1]) y = arr[0][1];
    else y = arr[1][1];

    cout << x << " " << y;
}