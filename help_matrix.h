//
// Created by nomadpd on 18.11.22.
//

#ifndef MODERNPROG_HELP_MATRIX_H
#define MODERNPROG_HELP_MATRIX_H

int **user_scanf_matrix(int n, int m);

void print_matrix(int**M, int n, int m);

void find_dot(int**M, int n, int m);

int **matrix_from_file(char *f, int n, int m,char mode[2]);

int **matrix_from_byte_file(char *f, int n, int m);

void save_matrix_to_file(char *f, int**M, int n, int m, char mode[3]);

#endif //MODERNPROG_HELP_MATRIX_H

