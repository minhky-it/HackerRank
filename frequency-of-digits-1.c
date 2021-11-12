#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100000
//https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true
int main(){
    int Arr[10] ={0};
    char str[MAX_SIZE];
    
    scanf("%s", &str);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if(i==(int)(str[j]-'0')) Arr[i]+=1;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", Arr[i]);
    }
    
    return 0;
}