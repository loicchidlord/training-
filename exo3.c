#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	int n;
	printf("Saisir la valeur de X :");
	scanf("%d", &x);
	printf("Saisir la valeur de n : ");
	scanf("%d", &n);
	printf("x Exposant n = %f\n", pow (x, n));
	return 0;
}
