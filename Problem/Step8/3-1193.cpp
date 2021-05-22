//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <ctype.h>


int main() {

    int x, start=1, prev=0, curent=0, chkFlag=0, num=0;

    scanf("%d", &x);

    while (1)
    {
        prev = curent;
        curent +=start;
        if(x <= curent) break;
        chkFlag=chkFlag==0 ? 1:0;
        start++;
        //printf("%d %d %d\n", curent, start, chkFlag);
        
    }
    num=x-prev;

    //printf("%d %d %d", prev, num, start);
    
    for(int i=0;i<num;i++){
        if(chkFlag==0 && i==num-1){
            printf("%d/%d ",start-i, i+1);
        }
        else if(chkFlag==1 && i==num-1){
            printf("%d/%d ", i+1, start-i);
        }
    }
    
    return 0;
}



