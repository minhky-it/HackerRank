#include <stdio.h>
//https://www.hackerrank.com/challenges/30-recursion/problem
int factorial(int x){
    int arr[100], result;
    arr[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        arr[i]=i*arr[i-1]; 
    }
    result = arr[x];    
    return result;
}
int main(){
    int n, result=0;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}