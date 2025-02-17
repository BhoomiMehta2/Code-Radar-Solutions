#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf('A');
    }
    elseif(80<=a<90){
        printf('B');
    }
    elseif(70<=a<80){
        printf('C');
    }
    elseif(60<=a<70){
        printf('D');
    }
    else{
        printf('F');
    }
    return 0;
}