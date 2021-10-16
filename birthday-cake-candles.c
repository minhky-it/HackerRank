#include <stdio.h>
#define MAX_SIZE 100000
//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
int main(){
    int birthDayCandles[MAX_SIZE];
    int n;
    int max=0;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &birthDayCandles[i]);
    }
    //Find Max of birthday cake candles
    max= birthDayCandles[0];
    for (int i = 1; i < n; i++)
    {
        if (max < birthDayCandles[i])
        {
            max = birthDayCandles[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(max == birthDayCandles[i]) count+=1;
    }
    printf("%d", count);
    return 0;
}