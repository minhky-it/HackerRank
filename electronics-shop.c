#include <stdio.h>
#define MAX_SIZE 1000000
//https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true
int main(){
    int buget, n, m, keyboard[MAX_SIZE], drives[MAX_SIZE],prices[MAX_SIZE]={0};
    scanf("%d%d%d",&buget,&n,&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&keyboard[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&drives[i]);
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            prices[k] = keyboard[i]+drives[j];
            k++; 
        }  
    }
    int max = -1;
    for (int i = 0; i < n*m; i++)
    {
        if(max<prices[i] && prices[i]<=buget) max = prices[i]; 
    }
    printf("%d",max);

    return 0;
}