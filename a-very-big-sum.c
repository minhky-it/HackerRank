#include <stdio.h>
#define MAX_SIZE 100000
//https://www.hackerrank.com/challenges/a-very-big-sum/problem
int main(){
    int n;
    scanf("%d", &n);
    long int sumArray[MAX_SIZE];
    long int total = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%ld",&sumArray[i]);
        total+=sumArray[i];
    }
    printf("%ld",total);
    
}
