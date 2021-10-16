#include <stdio.h>
#define MAX_SIZE 100
//https://www.hackerrank.com/challenges/plus-minus/problem
int main(){
    int n;
    int arr[MAX_SIZE];
    //[0]: Positive [1]: Negative [2]: Zero
    float count[] = {0,0,0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Count how many positive and negative intergers are there in above the Arr
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count[0]+=1;
        }
        else if(arr[i] < 0)
        {
            count[1] +=1;
        }
        else{
            count[2] +=1;
        }        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%1.9f \n", count[i]/=n);
    }
    
}