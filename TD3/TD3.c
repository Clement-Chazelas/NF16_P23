#include <stdio.h>
#include <stdlib.h>
#define TAB_SIZE 20
#define STRING_SIZE 60
#include <string.h>



int en_domain(int a, int b, int c)
{
    return (a>=b && a<=c);
}

void maj(char *chaine)
{
    int i=0;
    while(chaine[i] != '\0'){
        if(chaine[i] >= 'a' && chaine[i]<='z'){
            chaine[i] -= 'a'-'A';
        }
        printf("%c", chaine[i]);
        i++;
    }
}

int fact(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

struct Un_Tableau_entier{
    int*tab;
    int taille;
};

struct point{
    int x;
    int y;
};

typedef struct menu{
    char tab[TAB_SIZE][STRING_SIZE];
    int n;
}menu;

int max_length(menu m)
{
    if(m.n == 0){
        return -1;
    }
    int max;
    max = strlen(m.tab[0]);
    for(int i =1; i<m.n;i++){
        if(strlen(m.tab[i]) > max){
            max = strlen(m.tab[i]);
        }
    }
    return max;
}

void affiche_menu(menu m)
{
    printf("MENU :\n");
    int max = max_length(m);
    for(int i=0;i<m.n;i++){
        printf("%d.",i+1);
        for(int j=0;j<(max-strlen(m.tab[i]))/2;j++){
            printf(" ");
        }
        printf("%s\n", m.tab[i]);
    }
}

int choix_menu(menu m)
{
    char choix[STRING_SIZE];
    do{
        system("cls");
        affiche_menu(m);
        printf("Veuillez faire votre choix\n");
        scanf("%[^\n]%*c", choix);
        for(int i=0;i<m.n;i++){
            if(strcmp(choix, m.tab[i]) == 0){
                return i+1;
            }
        }
    }while(strcmp(choix,"q") != 00 && strcmp(choix,"Q") !=0);
}

int main()
{
    //en_domain();
    //char chaine[]= "Bonjour lama";
    //maj(chaine);
    //fact();
    /*
    struct point p1;
    p1.x=1;
    p1.y=5;
    printf("p1.x: %d  p1.y: %d\n", p1.x,p1.y);

    struct point* p2 = &p1;
    p2->x=20;
    p2->y=23;
    printf("p1.x: %d  p1.y: %d", p1.x,p1.y);
    */

    menu m;
    m.n = 0;
    strcpy(m.tab[0],"SALADE");
    strcpy(m.tab[1],"BURGER");
    strcpy(m.tab[2],"PIZZA");
    strcpy(m.tab[3],"SANDOUICHE POULI");
    m.n = 4;
    printf("Taille de la plus longue chaine :%d\n", max_length(m));

    affiche_menu(m);
    int a = choix_menu(m);
    if(a == 0){
        printf("Aucun choix");
    }
    else{
        printf("Choix : %d", a);
    }
}











