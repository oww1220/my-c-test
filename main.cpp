//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    char test[t][81];

    for(int i=0; i < t; i++) {
        scanf("%s", test[i]);

        printf("%s", test[i]);
    }

    for(int i=0; i < t; i++) {


        printf("%d", strlen(test[i]));
    }
    

    


    return 0;

}
