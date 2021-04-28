#include <stdio.h>
int main()
{
    int result=0;
    int array[10]={0};
    int size = sizeof(array)/sizeof(int);

    for(int i=0; i < size; i++){
        scanf("%d", &array[i]);
        array[i] = array[i]%42;
    }
    
    for(int i=0; i < size; i++){
        int rest = 0;
        for(int j=(i+1); j < size;j++) {
            if(array[i] == array[j]) {
                rest++;
            }
        }
        if(rest == 0) {
            result++;
        }
    }

    printf("%d", result);

    return 0;
}