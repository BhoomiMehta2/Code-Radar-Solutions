#include<stdio.h>
int main() {
    int i;
    int n;
    int j;
    
    scanf("%d",&n);
    for (i=n;i>0;i--){
        for( j=1; j<=i;j++){
            printf("*");
        
        }
        printf("\n");
        
    }

    
}