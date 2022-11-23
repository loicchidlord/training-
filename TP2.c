#include <stdio.h>
#include <math.h>
//définir la fonction f et dire à la fonction le type de valeur qu’il faut qu’elle retourne.
double f(double x)
{
return exp(x);
}
//Methode des rectangles
double aire(double (f)(double) , int a, int b, double h)
{
//
double acc;
int N;
int i;
acc=0;
//La valeur (b-a)/h traduit le fait que l’on découpe l’intervalle [a,b] par h. C’est la formule de l’aire
d’un rectangle.
N=(b-a)/h;
for (i=1; i<=N; i++) // réaliser toutes les boucles
{
acc = acc + f(a+i*h)*h;
}
return acc;
}
int main()
{
double Aire;
// a=0; /* Borne inferieure de l'intervalle */; b=1; /* Borne superieure de l'intervalle */

//affiche le message préfini.
printf ("valeur de l'integrale de la fonction: %f\n", aire(f, 0, 1, 0.1));
//fin du programme
return 0;
}


