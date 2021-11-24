#include <stdio.h>
//https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true
int main(){
    int n;
    scanf("%d",&n);
    int Size = n*2 -1;
    int start = 0;
    int end = Size-1;
    int Arr[Size][Size];
    while(n!=0){
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if((i==start)|| (i==end)|| (j==start)|| (j==end)){
                    Arr[i][j] = n;
                }
            } 
        }
        start++;
        end--;
        n--;
        
    }
    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
        {
            printf("%d ", Arr[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}