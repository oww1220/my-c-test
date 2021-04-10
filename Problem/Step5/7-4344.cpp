//#include <iostream>
//using namespace std;


#include <stdio.h>
#include <string.h>
#include <cstring>

int main()
{

    int c, students, input, sum=0, average=0, s=0;
    double result;
    scanf("%d", &c);

    int arry[1000] = {0};

    for(int i=0; i < c; i++){
        scanf("%d", &students);
        printf("%s %d\n", "first", students); 
        sum = 0;
        s = 0;
        average=0;
        arry[0] = students;
        
        for(int j=1; j <= students; j++){
            scanf("%d", &input);
            arry[j] = input;
            //printf("%s %d %d\n", "input", students, arry[j]);  
            sum = sum + input;
        }
        printf("%d \n", sum/students);

        average = sum/students;

        for(int f=1; f <= students; f++){
            
            if(average < arry[f]) {
                s++;
            }
            
        }
        result = (double)s*100/students;

        printf("%.3f%c\n", result, '%'); 

        /*
        for (int f = 0; f <= students; f++)   {
            printf("%d %s\n", arry[f], "result");    
        }*/

    }

    return 0;

}
