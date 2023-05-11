#include <stdio.h>
void add(int a, int b)
{
    printf("sum :%d\n", a + b);
    printf("sum :%d\n", a - b);
    printf("sum :%d\n", a * b);
    printf("sum :%d\n", a / b);
    printf("sum :%d\n", a % b);
}
int main()
{
    int a, b;
    char A;

    while (1)
    {
        printf("Enter the value of a\n ");
        scanf("%d", &a);

        printf("Enter the value of b\n ");
        scanf("%d", &b);

        printf("Enter yor selection : + , - , *, /, %\n");
        scanf(" %c", &A);

        switch (A)
        {
        case '+':
            add(a, b);
            break;

        case '-':
            add(a, b);
            break;

        case '*':
            add(a, b);
            break;
        case '/':
            add(a, b);
            break;
        }
    }
    return 0;
}