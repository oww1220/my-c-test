#include <stdio.h>
int main()
{
    int x, y;

    //입력
    scanf("%d", &x);
    scanf("%d", &y);

    if(x < 0 && y < 0) {
        printf("%d", 3);
    }
    else if(x < 0 && y > 0) {
        printf("%d", 2);
    }
    else if(x > 0 && y < 0){
        printf("%d", 4);
    }
    else {
        printf("%d", 1);
    }

}