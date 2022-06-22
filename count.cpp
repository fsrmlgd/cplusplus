/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：count.cpp
*   创 建 者：lgd
*   创建日期：2021年08月08日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int ch;
    FILE* fp;
    unsigned long count = 0;
    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters.\n", argv[1], count);
    return 0;
}
