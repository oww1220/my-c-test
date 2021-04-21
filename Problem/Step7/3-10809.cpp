//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일



int StringPointer(char *s);

int main() {
    
    char aTable[27] = "abcdefghijklmnopqrstuvwxyz";
    int cTable[27]={0};
    char *inputString = (char *)malloc(sizeof(char) * 101);
    scanf("%s", inputString);

    for(int i=0; i < StringPointer(inputString);i++){
        for(int j=0; j<sizeof(aTable)-1;j++){
            //printf("%c %c\n", inputString[i] , aTable[j]);
            if(inputString[i] == aTable[j]) {
                if(i > 0 && cTable[j] < 0) cTable[j]=i;
            }
            else {
                if(i == 0) cTable[j]=-1;
            }
        }
        
    }

    for(int i=0; i<26;i++){
        printf("%d ", cTable[i]);
    }

    free(inputString);


    /*//최적화 코드!!!
    char word[100] = { 0 };
    scanf("%s", word);
    for (int i = 97; i <= 122; i++) {
        int j = 0;
        while (word[j] != 0) {
            if (word[j] == (char)i) break;
            j++;
        }
        if (word[j] == (char)i) printf("%d ", j);
        else printf("-1 ");
    }*/




    return 0;
}

int StringPointer(char *s)
{
    int len = 0;
    while (*s++)
    {
        len++;
    }
    return len;
}


