#include <stdio.h>
#include <math.h>

//Question 1 : Définissez une structure, nommée complex_t
struct complexe
{ 
    double real;
    double im;
}; 
typedef struct complexe complex_t;

//Question 2 :
double complex_real(complex_t a)
{
	return a.real;
}

double complex_im(complex_t a)
{
	return a.im;
}

//Question 3
complex_t complex_add(complex_t a, complex_t b)
{
    complex_t add;
	add.real=(a.real)+(b.real);
	add.im=(a.im)+(b.im);
	return add; 
}

complex_t complex_sub(complex_t a, complex_t b)
{
    complex_t sub;
	sub.real=(a.real)-(b.real);
	sub.im=(a.im)+(b.im);
	return sub; 
}

//Question 4
complex_t complex_mul(complex_t a, complex_t b)
{
    complex_t mul;
    int j=-1;

	mul.real=((a.real)*(b.real))+((a.im)*(b.im));
	mul.im=(j*((a.real)*(b.im))+(b.real)*(a.im));
	return mul;
}

complex_t complex_div(complex_t a, complex_t b)
{
    complex_t div;
    int j=-1;
	div.real=
	div.im=
	return mul;
}


cplx c;
        c.re=(c1.re*c2.re+c1.im*c2.im)/(c2.re*c2.re+c2.im*c2.im);
        c.im=(c1.im*c2.re-c1.re*c2.im)/(c2.re*c2.re+c2.im*c2.im);

// Question 5
double complex_abs(complex_t a) 
{
	return sqrt( pow(a.real, 2.0 ) + pow(a.im, 2.0)) ; 
}

//Question 6
complex_t complex_conj(complex_t a) 
{
	complex_t conj;
	conj.real=a.real;
	conj.im=-a.im;
	return conj; 
}

int main() 
{
    int i;
    complex_t a;
	complex_t b;
	complex_t add;
    complex_t mul;
    complex_t div;

    printf("1er nombre complexe :\n");
    printf("+++++++++++++++++++++++++\n");
    printf("Partie réelle : ");
    scanf("%lf",&a.real);
    printf("Partie imaginaire : ");
    scanf("%lf",&a.im);
    printf("Z1= %lf + %lfi\n",a.real,a.im);
    printf("\n");
    printf("2e nombre complexe :\n");
    printf("+++++++++++++++++++++++++\n");
    printf("Partie réelle :");
    scanf("%lf",&b.real);
    printf("Partie imaginaire :");
    scanf("%lf",&b.im);
    printf("Z2= %lf + %lfi\n",b.real,b.im);
    add=complex_add(a,b);
    mul=complex_mul(a,b);
    printf("Le résultat de l'addition est : %lf + %lfi\n",add.real,add.im);
    printf("Le résultat de la multiplication est : %lf + %lfi\n",mul.real,mul.im);



    return 0 ;
}