#include <stdio.h>
//https://www.hackerrank.com/challenges/compare-the-triplets/problem
int main(){
    int A[3];
    int B[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &B[i]);
    }
    
    int count[] = {0,0};
    for (int i = 0; i < 3; i++)
    {
        if(A[i]>B[i]){
            count[0]+=1;
        }
        else if(A[i]<B[i]){
            count[1]+=1;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", count[i]);
    }
    
    
}