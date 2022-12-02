//
// Created by nomadpd on 02.12.22.
//
#include <stdbool.h>
#ifndef MODERNPROG_ST_H
#define MODERNPROG_ST_H

struct student {
    char name[15];
    int points;
    bool grade;
};

void check_grade(struct student *a);
#endif //MODERNPROG_ST_H
