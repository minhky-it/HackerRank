#include <stdio.h>
#define Max_Size 200
#include <stdlib.h>
//https://www.hackerrank.com/challenges/diagonal-difference/problem
int main(){
    /*
    Left to right:
    {
        [0,0] + [1,1] +[2,3]
    }
    Right to Left
    {
        [0,2] + [1,1] +[2,0]
    }
    Result = Abs(LtR-RtL)
    */
    int n, result;
    int arr[Max_Size][Max_Size];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }   
    int countRowsLtR = 0;
    int countRowsRtL = n-1;
    int LtR =0;
    int RtL = 0;
    for (int i = 0; i < n; i++)
    {   
        LtR+=arr[i][countRowsLtR];
        countRowsLtR+=1;
        RtL+=arr[i][countRowsRtL];
        countRowsRtL-=1;
    }
    result = abs(LtR - RtL);
    printf("%d", result);
}