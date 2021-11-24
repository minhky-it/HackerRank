#include <stdio.h>
#include <string.h>
#define SWAP(type,x,y) do{type tmp = x; x = y; y = tmp;}while(0)
//https://www.hackerrank.com/challenges/30-binary-numbers/problem
void reverse(int* array, int size)
{
    for (int i = 0; i < size / 2; ++i) {
        SWAP(int, array[i], array[size - i - 1]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    int countElementofArrays = 0;

    for (int i = 0; n!=0; i++)
    {
        arr[i] = n%2;
        n/=2;
        countElem
        countElementofArrays+=1;
    }
    //Đảo mãng
    reverse(arr, countElementofArrays);

    int count=0;
    int maxLen=0;
    for (int i = 0; i < countElementofArrays; i++)
    {
        if (arr[i]==1)
        {
            count+=1;
        }
        else{
            count=0;
        }
        if (maxLen<count)
        {
            maxLen=count; 
        } 
  
    }

    printf(" %d", maxLen);
    return 0;
}