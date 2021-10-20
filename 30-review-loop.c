#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100000
//https://www.hackerrank.com/challenges/30-review-loop/problem
//char str[số chuỗi][độ dài];
int main(){
    char str[10][MAX_SIZE];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(str[i]); j+=2)
        {
            printf("%c",str[i][j]);
        }
        printf(" ");
        for (int j = 1; j < strlen(str[i]); j+=2)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}