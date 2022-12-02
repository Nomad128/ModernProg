//
// Created by nomadpd on 02.12.22.
//
#include <stdio.h>
#include <string.h>


void ncopy(char strin[], char strout[],int* n)
{
    int k = 0;
//    printf("n = %d\n",*n);
    while ((k!=*n) && (*strout++ = *strin++) )
    {
        k +=1;
//        printf("%d",k);
    }
    return;
}
