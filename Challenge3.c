/*Challenge 3 : Calcule et affichage résultat en format décimal*/
/*a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, 
et en soignant l’interface homme/machine.
 (a/b donne le quotient de la division, a%b donne le reste de la division)*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
//comment
	printf("donne num a: ");
	scanf("%d",&a);
	printf("donne num b: ");
	scanf("%d",&b);
	printf("addtion  :%d\n",a+b);
    printf("sustraction : %d\n",a-b);
	 printf("division : %d\n",a/b);
	  printf("modul devison : %d\n",a%b);
	return 0;
}
