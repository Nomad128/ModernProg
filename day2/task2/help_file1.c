//
// Created by nomadpd on 02.12.22.
//
#include <stdio.h>


void copy(char strin[], char strout[])
{
    while ((*strout++ = *strin++));
}

void equal_string (char strin[], char strout[])
{
    int i = 0;
    while (strin[i] != EOF)
    {
        if (strin[i] != strout[i])
        {
            printf("in : %c\n",strin[i]);
            printf("out : %c\n",strout[i]);
            printf("false\n");
//            return;
        }
        i+=1;
    }
    printf("true\n");
    return;
}