#pragma warning(disable:4996)
#include<ios>
#include<cmath>
int main(){
    long long n,a,b;
    scanf("%lld",&n);
    a = sqrt(n);
    n<4?b=4:(b=a*4,b-=a*a-n?2*(n<=a*a+a):4);
    printf("%lld", b);
}