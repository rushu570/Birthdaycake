#include<stdio.h>
int main(){
    int x,y,z,A,B,n;
    
    scanf("%d",&n);
    for(int c=0;c<n;c++){
        
        scanf("%d",&x);
        
        scanf("%d",&y);
        
        scanf("%d",&z);
        A=x-z;
        if(A<0){
            A=-A;
        }
        B=y-z;
        if(B<0){
            B=-B;
        }
        if(A>B){
            printf("Cat B\n");
        }
        else if(A<B){
            printf("Cat A\n");
        }
        else{
            printf("Mouse C\n");
        }
    }
}