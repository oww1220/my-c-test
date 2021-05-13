//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>


int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(c-b <= 0){
        printf("%d", -1);
    }
    else{
        printf("%d", (a/(c-b))+1);
    }

    return 0;
}



