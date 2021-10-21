#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/for-loop-in-c
int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char numStr[9][20] = {"one","two","three","four","five","six","seven","eight","nine"};

    if(b>9)
    {
        for (; a<=9 ; a++) 
        {
            printf("%s\n",numStr[a-1]);
        }
        for (int i = 10; i<=b ; i++) 
            {
                if(i%2==0){
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }
    }
    else
    {
        for (; a<=b; a++) 
        {
            printf("%s\n",numStr[a-1]);
        }
    }

    return 0;
}

