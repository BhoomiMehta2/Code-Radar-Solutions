#include<stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&a,&b);
    if(sp>cp){
        printf("Profit\n");
    }
    else if(sp<cp){
        printf("Loss\n");
    }
    else{
        printf("No Profit No Loss\n");
    }
    return 0;
}