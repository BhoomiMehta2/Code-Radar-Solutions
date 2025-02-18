#include<stdio.h>
int main(){
    int num;
    int num_bits= sizeof(int)*char_bit;
    int msb=1<<(num_bits-1);
    if(num & msb){
        printf("Set");
        }else{
            printf("Not Set");
        }
        return 0;
}