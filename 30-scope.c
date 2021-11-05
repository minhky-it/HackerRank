#include <stdio.h>
#define MAX_SIZE 10
#include <stdlib.h>
//https://www.hackerrank.com/challenges/30-scope/problem?isFullScreen=true
int main(){
    int n;
    int arr[MAX_SIZE];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("%d",abs(arr[0]-arr[n]));
    
}