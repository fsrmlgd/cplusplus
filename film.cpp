/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：film.cpp
*   创 建 者：lgd
*   创建日期：2021年08月11日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
const int TSIZE = 45;
struct film {
    char title[TSIZE];
    int rating;
    struct film* next;
};
char* s_gets(char* st, int n)
{
    char* ret_val;
    char* find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

int main()
{
    struct film* head = NULL;
    struct film* prev;
    struct film* current;
    char input[TSIZE];

    puts("Enter first movie title:");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0') {
        current = (struct film*)malloc(sizeof(struct film));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }

    if (head == NULL)
        printf("No data entered. ");
    else
        printf("Here is the movie list:\n");
    current = head;
    while (current != NULL) {
        printf("Movie: %s Rating: %d\n", current->title, current->rating);
        current = current->next;
    }

    current = head;
    while (current != NULL) {
        free(current);
        head = current->next;
    }
    printf("Bye!\n");
    return 0;
}
