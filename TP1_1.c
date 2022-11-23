#include <stdio.h>
#include <math.h>

//Q1 Ecrire une fonction f en c pour definir la fonctionf(x)
double f(double);
double f(double x)
{
	double result;
	result=1/sqrt(x)-12*cos(x);
	return result;
}

//Q2 Écrire une fonction df permettant de calculer la dériver de la fonction précédente
double df(double x)
{
	double result_dev;
	result_dev=-1/(2*x*sqrt(x))+12*sin(x);
	return result_dev;
}

//Q3 Soit un point X0, la tyangente
//y=ax+b, calculons a et b
double calc_a(double x)
{
	double a;
	a=-1/(2*x*sqrt(x))+(12*sin(x));
	return a;
}

double calc_b(double x)
{
	double b;
	b=f(x)-df(x)*x;
	return b;
}

//Q4 Écrire la fonction NewtonRaphson

double a; //Q3
double b; //Q4
double Racine;
double NewtonRaphson(double result)
{
	Racine = -b/a;
	return Racine;
}

//Début de l'excécution
int main()
{
	//Q4
	int i,n;
	double x0;
	double Eps;
	double x;
	double result; //Q1
	double result_dev; //Q2
	
	/*printf("valeur de x : ");
	scanf("%d",&x);*/
	x=5;
	result=f(x);
	result_dev=df(x); //Q2
	a=calc_a(x); //Q3
	b=calc_b(x);//Q3
	printf("Valeur de x = %lf\n", x);
	printf("F(x) vaut %lf\n",result);
	printf("F'(x) vaut %lf\n",result_dev);
	printf("Le coéfficient a = %lf\n",a);
	printf("Le coéfficient b = %lf\n",b);

	//Q4
	printf("Nombre maximal d'itérations: ");
    scanf("%d",&n);
	printf("L'erreur acceptée: ");
    scanf("%lf",&Eps);
	printf("entrer la valeur initiale X0: ");
    scanf("%lf",&x0);
    for(i=0;i<n;i++)
    { 
		
    }
	return 0;
}