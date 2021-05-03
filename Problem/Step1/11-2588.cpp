#include <stdio.h>

int main()
{
    int A, B, a, b, c, re;
    scanf("%d%d", &A, &B);

    a = A*(B%10);
    b = A*((B%100)/10);
    c = A*(B/100);

    re = a + (b*10) + (c*100);

    printf("%d", a );
    printf("\n");
    printf("%d", b );
    printf("\n");
    printf("%d", c );
    printf("\n");
    printf("%d", re );


    return 0;

}