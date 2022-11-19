#include <stdio.h>
#include "math.h"
#include "help_matrix.h"


int main() {
    int **A;
    int n = 2;
    int m = 4;

    A = input_matrix(n,m);
    print_matrix(A,n,m);
    find_dot(A,n,m);
    return 0;
}
