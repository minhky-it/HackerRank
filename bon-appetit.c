#include <stdio.h>
#define MAX_SIZE 100000
//https://www.hackerrank.com/challenges/bon-appetit/problem
int bonAppetit(int items[],int n,int k,int b_charged){
    int totalBill = 0;
    for (int i = 0; i < n; i++)
    {
        if(i!=k) totalBill+=items[i]; 
    }
    int b_Actual = totalBill/2;
    int result = b_charged - b_Actual;
    return result; 

}

int main(){
    int n,k,b, items[MAX_SIZE];
    scanf("%d %d",&n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &items[i]);
    }
    scanf("%d", &b);
    int x = bonAppetit(items,n,k,b);
    if(x>0){
        printf("%d",x);
    }
    else{
        printf("Bon Appetit");
    }
    return 0;
}
