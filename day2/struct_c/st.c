//
// Created by nomadpd on 02.12.22.
//
# include "st.h"
#include <stdbool.h>

void check_grade(struct student *a)
{
    if ((*a).points>=50)
    {
        (*a).grade = true;
    }
    else{(*a).grade=false;}
    return;
}