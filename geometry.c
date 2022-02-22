#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define m 1000

int main()
{
char string[m];
int b = 0, n = 0;
printf("Enter the name of the shape and parameters\n");

fgets(string, m, stdin);

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
if ((strcmp(name, "circle") != 0) || (strcmp(name, "triangle") != 0))
{
printf("Incorrect shape name\n");
}
else
{
printf("Ok\n");
}

return 0;
}