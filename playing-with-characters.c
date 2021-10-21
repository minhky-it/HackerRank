#include <stdio.h>
#include <string.h>
//https://www.hackerrank.com/challenges/playing-with-characters/problem
int main(){
    char str[3][1000];
    for (int i = 0; i < 3; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s", str[i]);
    }
}