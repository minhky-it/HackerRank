#include <stdio.h>
#define MAX_SIZE 10000
//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true
void c_inArr(int Arr[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }
}
int main(){
    int score[MAX_SIZE];
    int n;
    scanf("%d", &n);
    int Maximum, Minimum;
    c_inArr(score,n);
    int Max=0, Min=0;
    Maximum = score[0], Minimum= score[0];
    for (int i = 1; i < n; i++)
    {
        if(score[i]<Minimum){
            Minimum = score[i];
            Min +=1;
        }
        else if(score[i]>Maximum){
            Maximum=score[i];
            Max +=1;
        }
        else{

        }
    }
    printf("%d ",Max);
    printf("%d",Min);
    return 0;
}