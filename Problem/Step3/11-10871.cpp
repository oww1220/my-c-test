#include <stdio.h>
int main()
{
    int N, X;

    //입력
    scanf("%d %d", &N, &X);
    
    int input;
    for(int i = 0; i < N; i++){
        scanf("%d",&input);

        if(X > input){
            printf("%d ", input);
        }
    }
    return 0;
}