#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(1<=a<=100){
        printf("In Range\n");
        }
        else if(a==0){
            printf("Out of Range\n");
        }
        return 0;
}