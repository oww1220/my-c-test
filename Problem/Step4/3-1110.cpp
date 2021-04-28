#include <stdio.h>
int main()
{
    int N, value, cycle = 0;
    //input
    scanf("%d", &N);

    int a, b, c ,d;
    value = N;
    while (1)
    {
        a = value/10;
        b = value%10;
        c = (a+b)%10;
        d = b*10;
        value = d+c;
        cycle++;
        if(N == value) {
            printf("%d", cycle);
            break;
        }
    }
    
    return 0;
}