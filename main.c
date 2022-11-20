#include <stdio.h>
#include "math.h"

double func1(double x)
{
    return 0.6*x + 3;
}

double func2(double x)
{
    return pow(x-2,3)-1;
}

double func3(double x)
{
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




int main() {
    const double eps1 = 0.000001;
    const int a = 0;
    const int b = 5;

    double ans1 = root(func1,func2,a,b,eps1);
    printf("Точка пересечения f1 и f2 = %lf\n",ans1);

    double ans2 = root(func2,func3,a,b,eps1);
    printf("Точка пересечения f2 и f3 = %lf\n",ans2);

    double ans3 = root(func1,func3,a,b,eps1);
    printf("Точка пересечения f1 и f3 = %lf\n",ans3);


    return 0;
}