//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>


int main() {

    int n, x=0, result=1, start=1;

    scanf("%d", &n);


    while (1)
    {
        if(n <= start) break;
        start += 6*(x+1);
        result++;
        x++;
    }
    
    printf("%d", result);
    
    return 0;
}



