#include <stdio.h>
//https://www.hackerrank.com/challenges/utopian-tree/problem?isFullScreen=true
void cycles(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int height = 1;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (j%2==0) height = height+1;
            else height = height*2;
        }
        printf("%d\n",height);  
    }
}
int main(){
    int t,n[61];
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&n[i]);
    }
    cycles(n,t);
    return 0;
}