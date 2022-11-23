#include <stdio.h>
#include <math.h>

double f(double x)
{
    //double fonction=exp(x);
    double fonction=pow(x,2);
    return fonction;
}

double Aire(double (f)(double), int a, int b, double h)
{
    int N;
    int i;
    double R;
    R=0;
    h=(b-a)/N;
    for (i=1; i<=N; i++);
    {
        R=R+f(a+i*h)*h;
    }
    return R;
}

//Méthode 1 : Méthode des rectangle
int main()
{
    int a, b, N;
    double h;
    printf("Valeur de la borne a : ");
    scanf("%d",&a);
    printf("Valeur de la borne b : ");
    scanf("%d",&b);
    printf("Valeur de N : ");
    scanf("%d",&N);
    printf("L'intégrale de la fonction est :%f\n", Aire(f, a, b, h));
    return 0;
}