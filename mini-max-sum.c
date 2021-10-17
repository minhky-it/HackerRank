#include <stdio.h>
//https://www.hackerrank.com/challenges/mini-max-sum/problem
int main(){
    int long arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%ld", &arr[i]);
    }
    //Sort
    for (int i = 0; i < 5; i++)
    {
        for(int j=0; j<5-i-1; j++){
            if (arr[j] > arr[j+1])
            {
                int long temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
        } 
    }
    int long SumArrMin = 0;
    for (int i = 0; i < 4; i++)
    {
        SumArrMin+=arr[i];
    }
    int long SumArrMax = 0;
    for (int i = 4; i > 0; i--)
    {
        SumArrMax+=arr[i];
    }
    printf("%ld ",SumArrMin);
    printf("%ld", SumArrMax);
    
    return 0;  
}
   