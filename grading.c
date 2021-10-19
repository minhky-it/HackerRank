#include <stdio.h>
//https://www.hackerrank.com/challenges/grading/problem
int main(){
    int n;
    int grade[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &grade[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int nextMultiphle = 0;
        if (grade[i]>=38)
        {
            nextMultiphle = grade[i] / 5;
            nextMultiphle = (nextMultiphle + 1)*5;
            if (nextMultiphle-grade[i]<3)
            {
                grade[i] = nextMultiphle;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",grade[i]);
    } 
    return 0;
}