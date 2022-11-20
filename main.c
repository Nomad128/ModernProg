#include <stdio.h>
#include "math.h"
//# Вариант 6
double func1(double x)
{
//  0.6x + 3
    return 0.6*x + 3;
}

double func2(double x)
{
//    (x-2)^3 - 1
    return pow(x-2,3)-1;
}

double func3(double x)
{
//    3/x
    return (3/x);
}

double root(double (*f1) (double), double (*f2) (double ), double a, double b, double eps1)
{
    double ab = fabs(a - b);
    double c = (a + b) / 2;
//    printf("0");
    while (ab > eps1){
        c = (a + b) / 2;
        ab = fabs(a - b);
//    (ab>eps1){
//    do{
//        printf("1");
        double Fa = f1(a) - f2(a);
        double Fb = f1(b) - f2(b);
        double Fc = f1(c) - f2(c);
//        printf("\na;b = %d;%d\n", a, b);

        if ((Fa > 0 && Fc > 0) || (Fa < 0 && Fc < 0)) {
//            printf("2");
            a = c;
//            root(f1, f2, c, b, eps1);
        }
        else
        {
            b = c;
//            root(f1, f2, a, c, eps1);
        }
    }
    return c;
}

double integral(double (*f) (double),double a, double b,double eps2)
{
    int n = 10;
    double sum2 = 10;
    double sum1 = 0;
    while (fabs(sum2 - sum1) > eps2) {
        double dx1 = (b - a) / n;
        sum1 = 0;
        for (int i = 0; i < n; i++) {
            double a_i = a + i * dx1;
            double b_i = a + (i + 1) * dx1;
            sum1 += f((a_i + b_i) / 2) * dx1;
        }
        double dx2 = (b - a) / (2 * n);
        sum2 = 0;
        for (int i = 0; i < (2 * n); i++) {
            double a_i = a + i * dx2;
            double b_i = a + (i + 1) * dx2;
            sum2 += f((a_i + b_i) / 2) * dx2;
        }
        n = 2 * n;
    }
    return sum2;
}




int main() {
    const double eps1 = 0.00000001;
    const int a = 0;
    const int b = 5;

    double ans1 = root(func1,func2,a,b,eps1);
    printf("Точка пересечения f1 и f2 = %lf\n",ans1);

    double ans2 = root(func2,func3,a,b,eps1);
    printf("Точка пересечения f2 и f3 = %lf\n",ans2);

    double ans3 = root(func1,func3,a,b,eps1);
    printf("Точка пересечения f1 и f3 = %lf\n",ans3);

    const double eps2 = 0.0000001;

    double int1 = integral(func1,ans3,ans1,eps2);
    printf("Интеграл от f1 = %lf\n", int1 );

    double int2 = integral(func3,ans3,ans2,eps2);
    printf("Интеграл от f3 = %lf\n", int2 );

    double int3 = integral(func2,ans2,ans1,eps2);
    printf("Интеграл от f2 = %lf\n", int3 );


    double answer = int1 - int2 - int3;
    printf("Искомый интеграл = %lf",answer);


    return 0;
}