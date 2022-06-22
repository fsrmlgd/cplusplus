/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：showchar.cpp
*   创 建 者：lgd
*   创建日期：2021年08月03日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
void display(char ch, int lines, int width)
{
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(ch);
        }
        putchar('\n');
    }
}

int main()
{
    int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n') {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        while (getchar() != '\n')
            continue;
        printf("Enter another character and two integers;\nEnter a newline to quit.\n");
    }
    printf("Bye.\n");
    return 0;
}
