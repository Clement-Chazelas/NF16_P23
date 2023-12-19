#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include <ctype.h>

/*

int main()
{
  //surfacecercle();
  //lecturededonnées();
  //cara();
  //somme();
  //comprisentre();
  //comprisentre2();
  //specar();
  //moyenne();
  //affichecar();
  //majuscule();
  nombres();
}
*/

void surfacecercle()
{
  int rayon=10;
  float surface=rayon*rayon*PI;
  printf("La surface du cercle dont le rayon est égal à %d est égale à %f", rayon, surface);
}

void lecturededonnees()
{
  int x,y;
  printf("Entrez deux valeur ");
  scanf("%d %d",&x,&y);
  printf("x = %d et y = %d",x,y);
}

void cara()
{
  char car=7;
  printf("%c",car);
  car = 98;
  printf("%d",car);
}

void somme()
{
  float x,y;
  printf("Entrez deux réels");
  scanf("%f %f \n",&x,&y);
  float somme = x+y;
  printf("somme = %.2f \n",somme);
}

void comprisentre()
{
  int x;
  scanf("%d",&x);
  if(x<=10 && x>=0){
    printf("FEUR");
  }
}

void comprisentre2()
{
  int x;
  scanf("%d",&x);
  if((x<=20 && x>=7) || x == 127) {
    printf("LAMA");
  }
}

void specar()
{
    char c = getchar();
    switch(c){
        case '1' :
            printf("un");
            break;
        case '2':
            printf("deux");
            break;
        case '3':
            printf("trois");
            break;
        default:
            printf("autre");
    }
}

void moyenne()
{
    int a,b,c;
    printf("Entrez trois entiers \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a = %d\t b = %d\t c = %d\t\n",a,b,c);
    int somme=a+b+c;
    printf("%d + %d + %d = %d\n",a,b,c,somme);
    int produit=a*b*c;
    printf("%d x %d x %d = %d\n",a,b,c,produit);
    float moyenne = ((float)somme) / 3.0;
    printf("La moyenne de ces trois nombres est : %d\n",moyenne);
}

void affichecar()
{
    printf("%d",'a'-'A');
}

void majuscule()
{
    char c;
    printf("Entrez un charactere\n");
    scanf("%c",&c);
    if(islower(c)){
        c = c-32;
    }
    printf("%c",c);
}

void nombres()
{
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",i);
    }
    i = 0;
    do {
       printf("%d\n",i);
       i++;
    } while(i<10);
    i = 0;
    while(i<10){
        printf("%d\n",i);
        i++;
    }
}

