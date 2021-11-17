#include <stdio.h>
//#include <string.h>
void splitTime(char str[],char str1[]){
    int j=0;
    for (int i = 0; i < 11; i++)
    {
        if(str[i]!=':'){
            str1[j]=str[i];
            j++;
        }
    }
    
}
void convertTime(char str[]){
    int hh = (str[0]-'0')*10 +(str[1]-'0');
    switch (str[6])
    {
    case 'A':
        {
            if(str[0]== '1' && str[1]=='2') hh-=12;
        }
        break;
    case 'P':
        {
            if(hh!=12) hh+=12;
        }
        break;
    
    default:
        break;
    }
    if(hh==0){
        printf("0%d:%c%c:%c%c",hh,str[2],str[3],str[4],str[5]);
    }
    else if(hh<10){
        printf("0%d:%c%c:%c%c",hh,str[2],str[3],str[4],str[5]);
    }
    else{
        printf("%d:%c%c:%c%c",hh,str[2],str[3],str[4],str[5]);
    }
}
int main(){
    char strTime[11]={' '};
    char strTime1[8]={' '};
    scanf("%s",&strTime);
    splitTime(strTime,strTime1);
    convertTime(strTime1);
    return 0;
}
