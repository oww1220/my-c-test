#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    printf("%d", (A+B)%C );
    printf("\n");
    printf("%d", (A%C + B%C)%C);
    printf("\n");
    printf("%d", (A*B)%C);
    printf("\n");
    printf("%d", (A%C * B%C)%C);


    return 0;

}