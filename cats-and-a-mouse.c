#include <stdio.h>
#define MAX_SIZE 1000
#include <stdlib.h>

//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem?isFullScreen=true

void catAndMouse(int queries[][3],int i){
    int distanceX = abs(queries[i][0] - queries[i][2]);
    int distanceY = abs(queries[i][1] - queries[i][2]);
    if(distanceX<distanceY) printf("Cat A\n");
    else if(distanceX==distanceY) printf("Mouse C\n");
    else printf("Cat B\n");
}

int main(){
    int q, queries[MAX_SIZE][3];
    //[0]: x
    //[1]: y
    //[2]: z
    scanf("%d",&q);
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&queries[i][j]);
        }
    }
    for (int i = 0; i < q; i++)
    {
        catAndMouse(queries,i);
    }
    
    return 0;
}