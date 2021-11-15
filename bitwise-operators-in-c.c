#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
//Complete the following function.
//AND FUNCTION OF TWO BANIARIES
int AND_FUNCTION(int a, int b){
    return a&b;
}
int OR_FUNCTION(int a, int b){
    return a|b;
}
int XOR_FUNCTION(int a, int b){
    return a^b;
}
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max[3]={0};
  //max[0]: AND
  //max[1]: OR
  //max[2]: XOR
  for (int i = 1; i < n; i++)
  {
      for (int j = i+1; j <=n; j++)
      {
          if((max[0]< AND_FUNCTION(i,j)) && (AND_FUNCTION(i,j) < k)) max[0] = AND_FUNCTION(i,j);
          if((max[1]< OR_FUNCTION(i,j)) && (OR_FUNCTION(i,j) < k)) max[1] = OR_FUNCTION(i,j);
          if((max[2]< XOR_FUNCTION(i,j)) && (XOR_FUNCTION(i,j) < k)) max[2] = XOR_FUNCTION(i,j);          
      }
  }
  for (int i = 0; i < 3; i++)
  {
      printf("%d\n", max[i]);
  } 
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
