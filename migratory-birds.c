#include <stdio.h>
int frequencyDuplicates(int arr[],int n,int freq[]){
    for (int i = 0; i < n; i++)
    {
        int index = arr[i];
        freq[index]++;
    }
    int maxType = 1;
    int maxFreq=freq[1];
    for (int i = 2; i < 6; i++)
    {
        if(freq[i]>maxFreq){
            maxType = i;
            maxFreq = freq[i];
        }
    }
    return maxType;
    
}

int main(){
    int n, arr[150000],freq[6]={0};
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",frequencyDuplicates(arr,n,freq));

    return 0;
}