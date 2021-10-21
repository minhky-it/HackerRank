#include <stdio.h>
//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
int main(){
    int n, sum = 0, division = 10000;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        sum+=(n/division)%10;
        division/=10;
    }
    printf("%d", sum);
    return 0;
    
}