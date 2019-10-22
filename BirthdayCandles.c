#include<stdio.h>
int main(){
    int n,i;
    
    scanf("%d",&n);
    int a[n],count=0;
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

  int max=a[0];
  for(int j=0;j<n;j++){
      if(a[j]>max){
          max=a[j];
      }
  }
    for(int s=0;s<n;s++){
        if(max==a[s]){
            count+=1;
        }
    }
    if(count==1){
        count++;
    }
    if(count==0){
        count++;
    }
    printf("%d\n",count);
}    