#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(double x)
{
    double y=cos(x);
    return y;
}

    float df(double x)
{
    double y=-sin(x);
    return y;
}

int main(int argc, char *argv[])
{
    int i,n;
    double x[100],EPS;
    double x0;
    printf("Nombre maximal d'itérations: ");
    scanf("%d",&n);
    printf("Précision voulue: ");
    scanf("%lf",&EPS);
    printf("entrer la valeur initiale X0: ");
    scanf("%lf",&x0);
    x[0] = x0;
    for(i=0;i<n;i++)
    {
        x[i+1] = x[i] - f(x[i])/df(x[i]);
        if( fabs(x[i+1] - x[i]) <=EPS)

        {
            printf("NBRE D'ITERATIONS = %d\t X=%lf\n",i,x[i+1]);
            goto fin;
        }

    }

    fin: system("PAUSE");
    return 0;
}