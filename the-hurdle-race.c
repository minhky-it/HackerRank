#include <stdio.h>
//https://www.hackerrank.com/challenges/the-hurdle-race/problem?isFullScreen=true
int max(int arr[],int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    return max;
}
int hurdlesRace(int arr[],int n,int k){
    int maxInt = max(arr,n);
    int result = maxInt - k;
    if(result <= 0) return 0;
    else return result;
}
int main(){
    int n,k;
    int hurdle[1000];
    scanf("%d%d",&n,&k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&hurdle[i]);
    }
    printf("%d",hurdlesRace(hurdle,n,k));
    return 0;
}