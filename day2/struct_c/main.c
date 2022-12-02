//
// Created by nomadpd on 02.12.22.
//
#include <stdio.h>
#include <stdbool.h>
#include "st.h"

int main()
{
    const bool def_grade = false;

    struct student st1 = {"Di",70,def_grade};
    struct student st2 = {"Sa",55,def_grade};
    struct student st3 = {"Al",40,def_grade};

    check_grade(&st1);
//    st1.grade = check_grade(&st1);
//    st2.grade = check_grade(&st2);
    check_grade(&st2);
//    st3.grade = check_grade(&st3);
    check_grade(&st3);

    printf("Студент %s сдал зачет = %i c баллом %d\n",st1.name,st1.grade,st1.points);
    printf("Студент %s сдал зачет = %i c баллом %d\n",st2.name,st2.grade,st2.points);
    printf("Студент %s сдал зачет = %i c баллом %d\n",st3.name,st3.grade,st3.points);
}