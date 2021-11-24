#include <stdio.h>
//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
int isLeapYear(int year){
    // 0: Leap
    // 1: Not Leap
    if(year>=1700 && year<1918){
        //Julian Calendar system
        if(year%4==0) return 0;
        else return 1;
    }
    else if(year==1918){
        return 2;
    }
    else{
        //Gregorian Calendar System
        if(year%400==0 || (year%4==0 && year%100 != 0))
        return 0;
        else return 1;
    }
    
}
int main(){
    int year;
    scanf("%d", &year);
    if(isLeapYear(year)==0){
        printf("12.09.%d", year);
    }
    else if(isLeapYear(year)==2){
        printf("26.09.%d",year);
    }
    else{
        printf("13.09.%d",year);
    }
    return 0;
}