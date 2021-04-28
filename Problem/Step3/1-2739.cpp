#include <stdio.h>
int main()
{
    int N;

    //입력
    scanf("%d", &N);
    
    for(int i = 1;i< 10;i++) {
        printf("%d %c %d %c %d\n", N, '*', i, '=', N*i);
    }
    
}