#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#define m 1000
bool lbracket_check(char* str)
{
    int b = 0;
    for (int i = 0; i < m; i++) {
        if (str[i] == '(') {
            b = 1;

            break;
        }
    }
    if (b == 0) {
        printf("Incorrect data. Expecdet '('\n");
        return false;
    } else {
        return true;
    }
}
bool rbracket_check(char* str)
{
    int b = 0;
    for (int i = 0; i < m; i++) {
        if (str[i] == ')') {
            b = 1;

            break;
        }
    }
    if (b == 0) {
        printf("Incorrect data. Expecdet ')'\n");
        return false;
    } else {
        return true;
    }
}
bool comma_check(char* str){
    int b = 0;
    for (int i = 0; i < m; i++) {
        if (str[i] == ',') {
            b = 1;

            break;
        }
    }
    if (b == 0) {
        printf("Incorrect data. Expecdet ','\n");
        return false;
    } else {
        return true;
    }

}
bool name_check(char* string)
{
   char name[8];
   int i;
    for ( i = 0; string[i] != '('; i++) {
        name[i] = string[i];
    }
    i++;
    name[i] = '\0';


    if (strcmp(name, "circle") != 0) {
        printf("Incorrect shape name\n");
        return false;
    } 
    else
    {
        return true;
    }
}
void char_to_double(char* UKAZAT, double* x1)
{
    char* point;
    double c;
    int i = 0;
    while (isdigit(*UKAZAT) == 0) {
        UKAZAT++;
        if (isdigit(*UKAZAT) != 0) {
            c = strtod(UKAZAT, &point);
            x1[i] = c;
            i++;
            UKAZAT = point;
            if (i == 3)
                break;
        } else {
            break;
        }
    }
}
int main()
{
    char string[m];
    double D[4];
    printf("Enter the name of the shape and parameters\n");

    fgets(string, m, stdin);
    char_to_double(string, D);

    if(comma_check(string) && rbracket_check(string) && lbracket_check(string))
    {
        printf("Data is correct\n");
        
    }

    return 0;
}
