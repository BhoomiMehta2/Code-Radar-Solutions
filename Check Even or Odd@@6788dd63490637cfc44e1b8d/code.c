#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("%d Even",a);
    }
    else{
        printf(" %d Odd",a);
    }
    return 0;
}