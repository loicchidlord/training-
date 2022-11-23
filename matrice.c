#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Question 1

struct matrix_t
{ 
    double** tab;
    double line;
    double col;
}; 
typedef struct matrix_t mtx;

//Question 2

void RAZ(int* z)
{
    *z=0;
}

mtx* matrix_new(int nb_lignes, int nb_colonnes)
{
	mtx* matrice;
    int i;
    int j;
    matrice=malloc(sizeof(double*));
    matrice->line=nb_lignes;
    matrice->col=nb_colonnes;
    matrice->tab = malloc(nb_lignes * sizeof(double*));


    //Début de la boucle
    for(i = 0; i<nb_lignes; i++)
    {
        matrice->tab[i]=malloc(nb_colonnes * sizeof(double));
        for(i=0 ; i < nb_lignes ; i++)
        {
            for(j=0 ; j < nb_colonnes; j++)
            {
                matrice->tab[i][j]=0;
            }
        }
    return matrice;
    }
}

void matrix_del(mtx* matrice)
{
    int i;
    for(i = 0; i < matrice->line  ;i++)
    {

    }
    free(matrice->tab);
    free(matrice);
}

//Question 3

//Question 4

//Question 5

int main()
{
    mtx* M1;
    int l;
    int c;
    printf("Nombre de lignes : ");
    scanf("%d",&l);
    printf("Nombre de colonnes : ");
    scanf("%d",&c);
    matrix_new(l,c);
}