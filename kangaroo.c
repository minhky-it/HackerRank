#include <stdio.h>
#include <stdbool.h>
//https://www.hackerrank.com/challenges/kangaroo/problem
int main(){
    //There're 2 kangaroos
    int long x1, v1, x2, v2;
    scanf("%ld", &x1);
    scanf("%ld", &v1);
    scanf("%ld", &x2);
    scanf("%ld", &v2);
    bool check = false;
    int v1_jump = v1;
    int v2_jump = v2;
    if((x1<x2 && v1 < v2) || (x1==x2 && v2 > v1) || (x1==x2 && v2 < v1)){
        printf("NO");
    }
    else{
        for (;v1<=100000000 && v2<= 100000000;)
        {
            if(x1+v1==x2+v2){
                check=true;
                break;
            }
            v1+=v1_jump;
            v2+=v2_jump;
        }
        if(check){
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    return 0;
}