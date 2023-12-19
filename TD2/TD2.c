#include <stdio.h>
#include <stdlib.h>

/*int main ()
{
    //fact2();
    //point();
    //tableau();
    //chainecar();
    tableau2();
}

*/

int facto(int n)
{

    return(n*facto(n-1));
}

int fact2()
{
    int nbr, fact;
    printf("Entrez un nombre pour calculer sa factorielle\n");
    scanf("%d", &nbr);
    fact = facto(nbr);
    printf("La factorielle de %d est %d", nbr, fact);
}

void point()
{
    int i=5;
    int* j=&i;

    printf("Adresse de i : %x\t valeur de i : %d", &i,i);
}

void tableau()
{
    int tab[10];

    for (int i=0;i<10;i++){
        tab[i]=7;
    }
    for (int i=0;i<10;i++){
        printf("tab[%d] = %d\n", i,tab[i]);
    }
}

void chainecar()
{
    char chaine[]="Bonjour";
    int i=0;
    while (chaine[i]!= '\0'){
        printf("%c",chaine[i]);
        i++;
    }
}

void tableau2()
{
    int tab[10];

    for (int i=0;i<10;i++){
        printf("Entrez une valeur\n");
        scanf("%d", &tab[i]);
    }
    for (int i=0;i<10;i++){
        printf("tab[%d] = %d\n", i,tab[i]);
    }
}
