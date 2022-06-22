/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：book.cpp
*   创 建 者：lgd
*   创建日期：2021年08月08日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
#include <string.h>
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

const int MAXTITL = 41;
const int MAXAUTL = 31;

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main()
{
    struct book library;
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.author, library.title, library.value);
    printf("Done.\n");
    return 0;
}
