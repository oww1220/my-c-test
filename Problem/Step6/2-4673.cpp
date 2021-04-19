//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>

int d(int n);

int main() {

    //변수 선언및 값 초기화!!
    int n[10001] ={0};
    int check=0;

    for(int i=1; i < 10001; i++){

        //함수호출!
        check=d(i);

        //배열공간 뒤로 할당하면 안되니 배열공간 제한!
        if(check <10001) n[check] = 1;
        //printf("%d \n",check);
    }

    for(int i=1; i < 10001; i++){
        if(n[i] != 1) {
            printf("%d\n", i);
        }
    }
    
    return 0;

}

int d(int n) {
    
        int j=n, sum=n;
        
        //자리수 체크!
        while (j!=0)
        {
            //정수 제일 뒷자리수를 가져와서 증감!
            sum += j%10;
            
            //현재 제일 뒷자리수 삭제!
            j = j/10;
        }

    return sum;
}
