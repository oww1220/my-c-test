//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>

int main()
{
    int t, calculate=0, total=0;
    scanf("%d", &t);

    char test[t][81]={0};

    for(int i=0; i < t; i++) {
        scanf("%s", test[i]);
    }

    for(int i=0; i < t; i++) {
        printf("%s\n", test[i]);
        for(int j=0; j < strlen(test[i]); j++) {
            //printf("%c\n", test[i][j]);
            
            if(test[i][j] == 'o') {
                calculate++;
                total= total + calculate;
            }
            else {
                calculate = 0;
            }

            //ptr++;
            
        }
        printf("%d\n", total);
    }
    

    


    return 0;

}
