//
// Created by nomadpd on 02.12.22.
//
#include <stdio.h>
#include <string.h>


void copy(char strin[], char strout[])
{
    while ((*strout++ = *strin++));
}

void equal_string (char strin[], char strout[])
{

//    printf("%s\n",strin);
//    printf("%s\n",strout);
    if (strcmp(strin,strout) == 0)
    {
        printf("True\n");
        return;
    }
    printf("False\n");
    return;
}