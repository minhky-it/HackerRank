#include <stdio.h>
//https://www.hackerrank.com/challenges/drawing-book/problem
int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    int turn_1 = 0;
    for (int i = 1; i <= n; i+=2)
    {
        if(p==i || p==(i-1)) break;
        turn_1++;
    }
    int turn_2 = 0;
    if(n%2==0){
        for (int i = n; i >=1 ; i-=2)
        {
            if(p==i || p==(i+1)) break;
            turn_2++;
        }
    }
    else{
        for (int i = n; i >=1 ; i-=2)
        {
            if(p==i || p==(i-1)) break;
            turn_2++;
        }
    }
    if(turn_1<=turn_2) printf("%d",turn_1);
    else printf("%d", turn_2);
    return 0;
}