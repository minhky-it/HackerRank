#include <stdio.h>
#define MAX_SIZE 100000
//https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true
void c_inArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void c_outArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
void howFruits(int getFruits[], int orangesArr[], int applesArr[], int m, int n, int a, int b, int s, int t){
    //Check apples
    for (int i = 0; i < m; i++)
    {
        int x =applesArr[i]+a;
        if(x>=s && x<=t) getFruits[0]+=1;
    }
    for (int i = 0; i < n; i++)
    {
        int x =orangesArr[i]+b;
        if(x>=s && x<=t) getFruits[1]+=1;
    }
}
int main(){
    int s,t, m,n;
    int appleTree, orangeTree;//a b
    int orangesArr[MAX_SIZE], applesArr[MAX_SIZE], getFruits[2]={0};
    scanf("%d %d", &s, &t);
    scanf("%d %d", &appleTree, &orangeTree);
    scanf("%d %d", &m, &n);
    c_inArr(applesArr, m);
    c_inArr(orangesArr, n);
    howFruits(getFruits,orangesArr,applesArr,m,n,appleTree,orangeTree,s,t);
    c_outArr(getFruits,2); 
}