#include <stdio.h>
#include <stdlib.h>

/*
Diff (A,B : Liste) : Liste
{
    Si (A==Nil)
        retourner B;
    Si (B==Nil)
        retourner A;
    Si (A.valeur > B.valeur)
        retourner Ajouter(B.valeur,Diff(A,B.suivant));
    Si (A.valeur < B.valeur)
        retourner Ajouter(A.valeur,Diff(A.suivant,B));
    Si (A.valeur == B.valeur)
        retourner Diff(A.suivant,B.suivant));
}
*/

typedef struct monome{
    int coef;
    int deg;
    struct monome * suivant;
}monome;

typedef monome * polynome;

polynome constructeur(int c, int d, polynome P)
{
    polynome res = malloc(sizeof(monome));
    res->coef = c;
    res->deg = d;
    res->suivant = P;

    return res;
}

int degre(polynome P)
{
    int max = -1;

    while(P != NULL){
        if(P->deg > max){
            max = P->deg;
        }
        P = P->suivant;
    }
    return max;
}

void afficher_monome(monome m)
{
    if(m.coef != 0){
        if(m.coef == 1){
            if(m.deg == 0){
                printf("1");
            }
            else if(m.deg == 1){
                printf("x");
            }
            else {
                printf("x^%d",m.deg);
            }
        }
        else if(m.coef == -1){
            if(m.deg == 0){
                printf("-1");
            }
            else if(m.deg == 1){
                printf("-x");
            }
            else {
                printf("-x^%d",m.deg);
            }
        }
        else{
            if(m.deg == 0){
                printf("%d",m.coef);
            }
            else if(m.deg == 1){
                printf("%d x",m.coef);
            }
            else {
                printf("%d x^%d",m.coef,m.deg);
            }
        }
    }
}

void afficher(polynome P)
{
    if(P == NULL){
        printf("\n");
    }
    else{
        afficher_monome(*P);
        if(P->suivant != NULL && P->suivant->coef > 0){
            afficher(P->suivant);
        }

    }
}

polynome produit_monome(int c, int d, polynome P)
{
    if(c == 0 || P == NULL){
        return NULL;
    }
    else{
        return constructeur(c*P->coef,d+P->deg,produit_monome(c,d,P->suivant));
    }
}

polynome produit(polynome P1, polynome P2)
{
    if(P1 == 0 || P2 == 0){
        return NULL
    }
    else{
        return addition(produit_monome(P1->coef,P1->deg, P2), produit(P1->suivant, P2));
    }
}

int main()
{
    polynome P = NULL;

    P = constructeur(3,7, P);
    P = constructeur(-2,4, P);
    P = constructeur(1,3, P);
    P = constructeur(2,1, P);
    P = constructeur(8,0, P);

    int a = degre(P);
    afficher(P);
}
