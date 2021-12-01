#include <stdio.h>
//https://www.hackerrank.com/challenges/staircase/problem
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j<=n-(i+2))
            {
                printf(" ");
            }
            else{
                printf("#");
            }
               
        }
        printf("\n");
    }
    
}