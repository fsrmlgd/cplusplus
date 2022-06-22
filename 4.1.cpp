#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[5];
    char last_name[10];
    printf("Please enter your full name:");
    scanf("%s %s", first_name, last_name);
    printf("your full name is %s %s.\n", first_name, last_name);
    printf("your full name is %s %s.\n", first_name, last_name);
    printf("your full name is %10s %10s.\n", first_name, last_name);
    printf("your full name is %-10s %-10s.\n", first_name, last_name);
    printf("Your first name has %ld letters.\n",strlen(first_name));
    printf("Your last  name has %ld letters.\n",strlen(last_name));
    return 0;
}