//
// Created by nomadpd on 18.11.22.
//

#include "help_matrix.h"
#include <stdio.h>
#include <stdlib.h>
int **user_scanf_matrix(int n, int m)
{
    int **M;
    M = malloc(n*sizeof(int*));
//    mat = malloc(n * m * sizeof(int);

    for (int i = 0; i<n; ++i)
    {
        M[i] = malloc(m*sizeof(int));
        for (int j=0;j<m;++j)
            {
                scanf("%d",&M[i][j]);
            }
    }
    return M;
}

void print_matrix(int**M, int n, int m)
{
    printf("Исходная матрица\n");
    for (int i = 0; i<n; i++)
    {
        for (int j=0;j<m;j++)
        {
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
}

void find_dot(int**M,int n, int m) {
    int max_in_col[m];
    int min_in_row[n];

    printf("Минимальные значения по строкам:\n");
    for (int i = 0; i < n; i++)
    {
        int min_el_in_row = M[i][0];
        for (int j = 1; j < m; j++) {
            if (min_el_in_row >= M[i][j]) {
                min_el_in_row = M[i][j];
            }
        }
        min_in_row[i] = min_el_in_row;
    printf("%d\n", min_in_row[i]);
    }

    printf("Максимальные значения по столбцам:\n");
    for (int j = 0; j<m;j++)
    {
        int max_el_in_row = M[0][j];
        for (int i = 1; i<n;i++)
        {
            if (max_el_in_row <= M[i][j])
            {
                max_el_in_row = M[i][j];
            }
        }
        max_in_col[j] = max_el_in_row;
    printf("%d\t", max_in_col[j]);
    }

    printf("\nСёдла:\n");
    for (int i = 0; i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            if (min_in_row[i] == max_in_col[j])
            {
                printf("Значение M[%i][%i] = %d;\n",i,j,M[i][j]);
            }
        }
//    printf("\n");
    }
}

int **matrix_from_file(char *f, int n, int m,char mode[2])
{
    int **M;
    M = malloc(n* sizeof(int *));

    FILE *file = fopen(f, mode);

    for (int i = 0; i<n; ++i)
    {
        M[i] = malloc(m*sizeof(int));
        for (int j=0;j<m;++j)
        {
            fscanf(file, "%d", &M[i][j]);
        }
    }
    fclose(file);

//    FILE *file = fopen(f,mode);
//    fread(M,sizeof (int),n,file);
//    fclose(file);
    return M;
}


//int **matrix_from_byte_file(char *f, int n, int m)
//{
//    int **M;
//    M = malloc(n* sizeof(int *));
//
//    FILE *file = fopen(f, "rb");
//
//    for (int i = 0; i<n; ++i)
//    {
//        M[i] = malloc(m*sizeof(int));
//        for (int j=0;j<m;++j)
//        {
//            fscanf(file, "%d", &M[i][j]);
//        }
//    }
//    return M;
//}

void save_matrix_to_file(char *f, int**M, int n, int m, char mode[3])
{
    FILE *file = fopen(f,mode);

    for (int i = 0; i<n; ++i)
    {
        for (int j=0;j<m;++j)
        {
            fprintf(file, "%d\t", M[i][j]);
        }
        fprintf(file,"\n");
    }
    fclose(file);
}