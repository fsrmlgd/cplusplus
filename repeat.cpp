/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：repeat.cpp
*   创 建 者：lgd
*   创建日期：2021年08月07日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <stdio.h>
int main(int argc, char* argv[])
{
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (int count = 1; count < argc; count++) {
        printf("%d: %s\n", count, argv[count]);
    }
    printf("\n");
    return 0;
}
