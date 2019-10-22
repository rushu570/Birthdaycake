#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int hour,minutes;
    char *Time[]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine","half"};
    scanf("%d",&hour);
    scanf("%d",&minutes);
    if(minutes==0){
        printf("%s o' clock",Time[hour-1]);
    }
    else if (minutes==1) {
        printf("%s minute past %s\n",Time[0],Time[0]);
    }
    else if (minutes>30)
    {    int TimeRemain=0;
        TimeRemain=60-minutes;
        if(minutes==45){
            printf("%s to %s\n",Time[TimeRemain-1],Time[hour]);
        }
        else{
            
            printf("%s minutes to %s\n",Time[TimeRemain-1],Time[hour]);
        }
    }
    else if(minutes<30){
            if(minutes==15){
                printf("%s past %s\n",Time[14],Time[hour-1]);
            }
            else{
                printf("%s minutes past %s\n",Time[minutes-1],Time[hour-1]);
            }
    }
    else{
        printf("%s past %s\n",Time[29],Time[hour-1]);
    }
    return 0;
}