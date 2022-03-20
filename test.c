#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[] = {1,1,2,2,4,5,5};
    int maxLength = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if(abs(arr[i]-arr[j]<=1)) maxLength++;
        }
    }
    printf("%d", maxLength);
}