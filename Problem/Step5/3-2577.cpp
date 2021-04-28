#include <stdio.h>
int main()
{
    int a, b, c, result, endNum;
    int array[10] = {0};
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    result = a*b*c;

    while (result > 0)
    {
        endNum = result%10;
        result = result/10;
        array[endNum]++; 
    }
    
    for(int i = 0; i < 10;i++){
        printf("%d\n", array[i]);
    }
    

    return 0;
}