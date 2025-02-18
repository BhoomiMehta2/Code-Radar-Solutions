#include <stdio.h>

int main() {
    char ch; int a,b;
    scanf("%d %d %c",&a,&b,&ch);
    switch (ch) {
        case '+':
        printf("%d + %d = %d\n", a,b,a+b);
        break;
        case '-':
        printf("%d + %d = %d\n", a,b,a-b);
        break;
        case '*':
        printf("%d + %d = %d\n", a,b,a*b);
        break;
        case '/':
        printf("%d + %d = %d\n", a,b,a/b);
        break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    
    return 0;
}
