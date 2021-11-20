#include <stdio.h>
//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
int findPairs(int arr[], int n, int k){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(((arr[i]+arr[j])%k)==0) count+=1; 
        }
    }
    return count;
}
int main(){
    int n,k,arr[100];
    scanf("%d %d", &n,&k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", findPairs(arr,n,k));
    return 0;
}