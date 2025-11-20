#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	b = a / 5 + !!(a % 5 > 0) + !!(a % 5) * !(a % 5 % 2);
	printf("%d", a != 4 && a != 7 ? -1 : b);
}

// #include<iostream>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); 
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, three = 0, five = 0;
    
//     cin >> N;

//     while(N){
//         if(N >= 5){
//             N -= 5;
//             five++;
//         } else if(N >= 3) {
//             N -= 3;
//             three++;
//         } else if(N < 3 && five > 0) {
//             N += 2;
//             five--;
//             three++;
//         } else {
//             cout << -1;
//             return 0;
//         }
//     }
//     cout << three + five;
// }