#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int array[N];

    for(int i = 0; i < sizeof(array)/sizeof(array[0]);i++){
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];

    for(int i = 0; i < sizeof(array)/sizeof(array[0]);i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min) {
            min = array[i];
        }
    }

    printf("%d %d", min , max);
    
    
    return 0;
}