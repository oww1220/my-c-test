#include <stdio.h>
int main()
{
    int array[9];
    int max = array[0], maxIdx = 0;

    for(int i = 0; i < sizeof(array)/sizeof(array[0]);i++){
        scanf("%d", &array[i]);
        if(array[i] > max) {
            max = array[i];
            maxIdx = i;
        }
    }

    printf("%d\n%d", max , maxIdx+1);
    
    
    return 0;
}