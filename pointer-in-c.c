#include <stdio.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/pointer-in-c/problem
void update(int *a,int *b) {
    // Complete this function
    int x = *a;
    int y = *b;
    *a=x+y;
    *b=abs(x-y);
    //printf("%d",*a-*b); 
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}