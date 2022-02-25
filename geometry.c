#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define m 1000

int main()
{
    char string[m];
    int b = 0, n = 0, br1, br2;
    printf("Enter the name of the shape and parameters\n");

    fgets(string, m, stdin);
    for (int i = 0; i<m; i++)
    {
        if (string[i] =='(')
        {
            b =1;
            br1 = i;
            break;
        }
    }
    if(b == 0)
    {
        printf("Incorrect data. Expecdet '('\n");

    }
    b = 0;
    for (int i = 0; i<m; i++)
    {
        if (string[i] ==')')
        {
            b =1;
            br2 = i;
            break;
        }
    }
    if(b == 0)
    {
        printf("Incorrect data. Expecdet ')'\n");
    }
    if(br1>br2)
    {
        printf("Incorrect data\n");
    }
    b = 0;
    for (int i = 0; i<m; i++)
    {
        if (string[i] ==',')
        {
            b =1;

            break;
        }
    }
    if(b == 0)
    {
        printf("Incorrect data. Expected ','");
    }
    for (int i = 0; string[i] != '('; i++)
    {
        n++;
    }


    char name[n];
    for (int i = 0; string[i] != '('; i++)
    {
        name[i] = string[i];
    }
    int i = 0;
    if ((strcmp(name, "circle") != 0) && (strcmp(name, "triangle") != 0))
    {
        printf("Incorrect shape name\n");
    }

    return 0;
}
