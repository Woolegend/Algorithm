#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.1415926535897932384626433832795

double r, uArea, tArea;

int main(){
    cin >> r;

    uArea = pow(r, 2) * PI;
    tArea = pow(r, 2) * 2;

    printf("%.6f\n%.6f", uArea, tArea);
}