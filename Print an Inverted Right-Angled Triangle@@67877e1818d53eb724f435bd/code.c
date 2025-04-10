#include<stdio.h>
int main() {
    int i;
    int n;
    int j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i=n;i>0;i--){
        for( j=1; j<=i;j++){
            printf("*");
        
        }
        printf("\n");
        
    }

    
}