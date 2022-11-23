#include <stdio.h>
#include <math.h>

double f(double x)
{
    double fonction=pow(x,2);
    return fonction;
}
//Methode des rectangles
double aire(double (f)(double) , int a, int b, double h)
{
    double R;
    int N;
    int i;
    R=0;
    N=(b-a)/h;
        for (i=1; i<=N; i++) // réaliser toutes les boucles
        {
            R = R + f(a+i*h)*h;
        }
        return R;
}

int main()
{
    int a, b, N;
    double h;
    printf("Valeur de la borne a : ");
    scanf("%d",&a);
    printf("Valeur de la borne b : ");
    scanf("%d",&b);
    printf("Valeur de h : ");
    scanf("%lf",&h);
    printf ("valeur de l'integrale de la fonction: %lf\n", aire(f, a, b, h));
    return 0;
}