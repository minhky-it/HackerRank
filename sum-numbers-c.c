#include <stdio.h>
//https://www.hackerrank.com/challenges/sum-numbers-c/problem
int main(){
    int a,b;
    float c,d;
    scanf("%d %d", &a, &b);
    scanf("%f %f",&c, &d);
    printf("%d %d\n",a+b, a-b);
    printf("%3.1f %3.1f",c+d,c-d);
    return 0;

}