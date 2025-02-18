#include <stdio.h>

int main() {
    char ch; int a,b;
    scanf("%d %d %c",&a,&b,&ch);
    switch (ch) {
        case '+':
        printf("%d %d %c\n", a,b,a+b);
        break;
        case '-':
        printf("%d %d %c\n", a,b,a-b);
        break;
        case '*':
        printf("%d %d %c\n", a,b,a*b);
        break;
        case '/':
        if (b != 0) {
                printf("%d %d %c\n", a, b, a / b);
            } else {
                printf("Error! Division by zero.\n");
            }
        break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    
    return 0;
}
