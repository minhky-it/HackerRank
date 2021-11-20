#include <stdio.h>
//https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true
int countSquare(int arr[], int n,int d, int m){
    int count =0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < i+m; j++)
        {
            sum+=arr[j];
        }
        if(sum==d) count+=1;
    }
    return count;
}
int main(){
    int n,d,m, chocolateBar[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &chocolateBar[i]);
    }
    scanf("%d %d",&d,&m);
    printf("%d",countSquare(chocolateBar,n,d,m));
    return 0;
}