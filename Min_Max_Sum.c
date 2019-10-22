#include<stdio.h>
int main(){
    int i,j,k;
    unsigned long long a[5],temp,small;
    for(i=0;i<5;i++){
        scanf("%llu",&a[i]);
    }
    int n=5;
    for(j=0;j<n-1;j++){
         small=j;
        for(k=j+1;k<n;k++)
        {
         if(a[small]>a[k])
         small=k;
        }
    if(small!=j){
    temp=a[j];
    a[j]=a[small];
    a[small]=temp;
        }
     }
    unsigned long long Max_Sum=0,Min_Sum=0;
    for(int c=0;c<4;c++){
        Min_Sum+=a[c];
    }
    for(int f=1;f<5;f++){
        Max_Sum+=a[f];
    }
    printf("%llu %llu \n",Min_Sum,Max_Sum);
    return 0;
}