#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "math.h"
#include "help_matrix.h"


int main(int argc, char** argv) {
    int n = 2;
    int m = 3;
    int **A;
    bool sv = false;
    char name_out[15];
    char md_save[3];

    for (int i =1;i<argc;i++)
    {
//        printf("%s\n",argv[i]);
//        printf("%c\n",argv[i][1]);
//        printf("%s\n",argv[i]+1);
//        printf("%s\n",argv[i]+2);
//        printf("%s: argv[%d] = '%s'\n",__FUNCTION__ ,i,argv[i]);
        if (argv[i][0] == '-') {
            if (argv[i][1] == 'r') {
//            printf("%s\t",argv[i]);
//            printf("%s\t",argv[i]+1);
//            printf("%s\n",argv[i]+2);
                A = matrix_from_file(argv[i + 1], n, m, argv[i] + 1);
                i++;
//            printf("Открываю из файла\n");
            }

            if (argv[i][1] == 'w') {
                sv = true;
//            char name_out[] = (char) (argv[i+1] + 1);
//            strcopy
                strcpy(name_out, argv[i + 1]);
                strcpy(md_save, argv[i] + 1);
//            md_save = argv[i] + 1;
            }
        } else {A = user_scanf_matrix(n, m);}


//        if (!strcmp(argv[i],"-w"))
//        {
//
//        }
    }


    print_matrix(A,n,m);
    find_dot(A,n,m);

    if (sv == true)
    {
//        printf("%s",md_save);

        save_matrix_to_file(name_out,A,n,m,md_save);
//        FILE *f_out = fopen(name_out, md_save );
//        fwrite(A,sizeof (A),1, f_out);
//        for(i=0;i<lines;i++) {
//            for(j=0;j<num;j++) {
//                fprintf(file,"%d ",array[i][j]);
//            }
//            fprintf(file,"\n");}
//        fclose(f_out);
    }




//    if (argv[0]=="-s")
//    printf("%d\n",argc);
//    printf("%cc\n",argv);
    return 0;
}
